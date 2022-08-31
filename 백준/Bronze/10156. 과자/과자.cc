#include <iostream>

using namespace std;

int main() {
    int price, num, haveMoney, result;
    cin >> price >> num >> haveMoney;
    
    result = -1 * (haveMoney - price * num);
    
    cout << ((result > 0) ? result : 0);
}