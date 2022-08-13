#include <iostream>
using namespace std;

string quick[20000];

void quick_sort(int left, int right) {
    
    if (left >= right) {
        return;
    }
    int pivot = quick[(left+right)/2].length();
    int l = left, r = right;
    
    while (l <= r) {
        while (quick[l].length() < pivot) {
            l++;
        }
        while (quick[r].length() > pivot) {
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

void word_sort(int left, int right) {
    if (left >= right) {
        return;
    }
    
    string pivot = quick[(left+right)/2];
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
    
    word_sort(left, r);
    word_sort(l, right);
}

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, stack=0, start=0;
    cin >> num;   
    
    for (int i=0; i<num; i++) {
        cin >> quick[i];
    }
    
    quick_sort(0, num-1);
    
    for (int i=0; i<num; i++) {
        if (quick[i].length() == quick[i+1].length()) {
            stack++;
        } else {
            word_sort(start, stack);
            stack++;
            start = stack;
        }
    }
    
    for (int i=0; i<num; i++) {
        if (quick[i] != quick[i+1]) {
            cout << quick[i] << "\n";
        } 
    }
    
}
