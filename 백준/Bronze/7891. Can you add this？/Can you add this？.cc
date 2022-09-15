#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int a, b;
        cin >> a >> b;
        
        cout << a + b << "\n";
    }
}