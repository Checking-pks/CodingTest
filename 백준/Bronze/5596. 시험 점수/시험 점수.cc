#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    
    for (int i=0; i<4; i++) {
        int num;
        cin >> num;
        
        a += num;
    }
    
    for (int i=0; i<4; i++) {
        int num;
        cin >> num;
        
        b += num;
    }
    
    cout << ((a >= b) ? a : b);
}