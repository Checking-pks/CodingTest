#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int length, min, max, num;
    cin >> length;
    
    for (int i=1; i <= length; i++) {
        cin >> num;
        
        if (i==1) {
            min = num;
            max = num;
        } else {
            if (min > num) {
                min = num;
            } else if (max < num) {
                max = num;
            }
        }      
    } 
    cout << min << " " << max;  
}