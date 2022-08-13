#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    switch (num%7) {
        case 1:
        case 3:
            cout << "CY";
            break;
        case 0:
        case 2:
        case 4:
        case 5:
        case 6:
            cout << "SK";
            break;
    }
}
