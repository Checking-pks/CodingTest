#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    for (int i=1; i <= 2*num-1; i++) {
        if (i <= num) {
            for (int j=1; j <= i; j++) {
                cout << "*";
            }
        } else if (i > num) {
            for (int j=1; j <= 2*num-i; j++) {
                cout << "*";
            }
        }
        cout << "\n";
    }
}