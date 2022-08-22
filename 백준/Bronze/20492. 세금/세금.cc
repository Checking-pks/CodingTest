#include <iostream>

using namespace std;

int main() {
    double money;
    cin >> money;
    
    cout << int(money * 0.78) << " " << int(money * 0.8 + money * 0.2 * 0.78);
}