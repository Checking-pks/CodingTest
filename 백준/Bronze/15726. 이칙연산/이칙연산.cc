#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (b > c)
        cout << a * b / c;
    else
        cout << a * c / b;
}