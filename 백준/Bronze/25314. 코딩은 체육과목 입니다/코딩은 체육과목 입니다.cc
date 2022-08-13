#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n) {
        cout << "long ";
        n -= 4;
    }
    
    cout << "int";
    
    return 0;
}