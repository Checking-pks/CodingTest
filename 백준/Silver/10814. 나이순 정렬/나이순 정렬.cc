#include <iostream>
using namespace std;

int quick[100000];
string name[100000];

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
            swap(name[l], name[r]);
            l++;
            r--;
        }
    }
    
    quick_sort(left, r);
    quick_sort(l, right);
}

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        cin >> quick[i] >> name[i];
        quick[i] = quick[i]*1000000 + i;
    }
    
    quick_sort(0, num-1);
    
    for (int i=0; i<num; i++) {
        cout << quick[i]/1000000 << " " << name[i] << "\n";
    }
}
