#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    unsigned long long num;
    cin >> num;
    
    switch (num%5) {
        case 0:
        case 2:
            cout << "CY";
            break;
        case 1:
        case 3:
        case 4:
            cout << "SK";
            break;
    }
}
