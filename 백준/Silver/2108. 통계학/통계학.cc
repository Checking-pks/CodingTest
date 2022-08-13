#include <iostream>
using namespace std;

int quick[500000];

void quick_sort(int left, int right) {
    if (left >= right) {
        return;
    }
    
    int pivot = quick[(left+right)/2];
    int l = left, r = right;
    
    while (l <= r) {
        while (quick[l] < pivot) {
            l++;
        }
        while (quick[r] > pivot) {
            r--;
        }
        
        if (l <= r) {
            swap(quick[l], quick[r]);
            l++;
            r--;
        }
    }
    
    quick_sort(left, r);
    quick_sort(l, right);
}

int b_v(int i) {
    if (quick[i] == quick[i+1]) {
        return 1 + b_v(i+1);
    } else {
        return 1;
    }
}

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, sum=0, best_value, record=0, twice=0, max=-4001, min=4001;
    cin >> num;
    
    int list[num] = {0,};
    
    for (int i=0; i<num; i++) {
        cin >> list[i];
        
        sum += list[i];
        quick[i] = list[i];
        
        if (max < list[i]) {
            max = list[i];
        }
        if (min > list[i]) {
            min = list[i];
        }
    }
    
    
    double t = sum/double(num);
    
    if (t>0 && t >= sum/num+0.5) {
        sum += num;
    } else if (t<0 && t <= sum/num-0.5) {
        sum -= num;
    }
    
    quick_sort(0, num-1);
    
    for (int i=0;i<num;) {
        int check = b_v(i);
        
        if (check > record) {
            record = check;
            best_value = quick[i];
            twice = 0;
        } else if (check == record && twice == 0) {
            best_value = quick[i];
            twice = 1;
        }
        
        i += check;          
    }
    
    cout << sum/num << "\n";
    cout << quick[num/2] << "\n";
    cout << best_value << "\n";      
    cout << max - min << "\n";
    
}

