#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    if (num%2 == 0) {
        cout << "SK";
    } else {
        cout << "CY";
    }
}
