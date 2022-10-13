#include <iostream>

using namespace std;

int main() {
    int have1, have2;
    int price;
    
    cin >> have1 >> have2 >> price;
    
    cout << have1 + have2 - ((2 * price <= have1 + have2) ? 2 * price : 0);
}