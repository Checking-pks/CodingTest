#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size, num=0, max=-1, min=101, p1,p2;
    cin >> size;
    int a[size] = {0,}, b[size] = {0,}, result[size] = {0,};
    
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    
    for (int i=0; i<size; i++) {
        cin >> b[i];
    }
   
   
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if (a[j] <= min) {
                p1 = j;
                min = a[j];
            }
            
            if (b[j] >= max) {
                p2 = j;
                max = b[j];
            }
        }
        
        a[p1] = 102;
        b[p2] = -2;
        
        num += max*min;
        
        max = -1;
        min = 101;
        
    }
    
    
    cout << num;
}
