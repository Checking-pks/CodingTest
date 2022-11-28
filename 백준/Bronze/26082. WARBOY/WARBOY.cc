#include <iostream>

using namespace std;

int main() {
    int rivalPrice, rivalPerform, warboyPrice;
    
    cin >> rivalPrice >> rivalPerform >> warboyPrice;
    
    cout << rivalPerform / rivalPrice * warboyPrice * 3;
}