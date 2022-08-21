#include <iostream>

using namespace std;

int main() {
    int bottle, result = 0;
    
    for (int i=0; i<6; i++) {
        cin >> bottle;
        result += bottle;
    }
    
    cout << result * 5;
}