#include <iostream>

using namespace std;

int main() {
    int x, y, max = -1;
    
    for (int i=1; i<=9; i++) {
        for (int j=1, num; j<=9; j++) {
            cin >> num;
            
            if (max < num) {
                max = num;
                x = i;
                y = j;
            }
        }
    }
    
    cout << max << "\n" << x << " " << y;
}