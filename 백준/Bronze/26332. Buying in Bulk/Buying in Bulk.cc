#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int count, price;
        cin >> count >> price;
        cout << count << " " << price << "\n";
        cout << price + (count>1 ? count-1 : 0) * (price-2) << "\n"; 
    }
}