#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    while (num--) {
        int count;
        cin >> count;
        
        while (count--)
            cout << "=";
        cout << "\n";
    }
}