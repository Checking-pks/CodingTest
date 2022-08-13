#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size, list[501]={0,}, old_list[501]={0,}, max=0;
    cin >> size;
    
    cin >> old_list[1];
    
    for (int i=2; i<=size; i++) {
        for (int j=1; j<=i; j++) {
            cin >> list[j];
            
            if (old_list[j-1] > old_list[j]) {
                list[j] += old_list[j-1];
            } else {
                list[j] += old_list[j];
            }
        }
        
        for (int j=1; j<=i; j++) {
            old_list[j] = list[j];
        }
        
    }
    
    for (int i=0; i<=size; i++) {
        if (max<old_list[i]) {
            max = old_list[i];
        }
    }
    
    cout << max;
    
}
