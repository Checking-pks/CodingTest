#include <iostream>
using namespace std;

int main() {
    int TestCase;
    cin >> TestCase;
    for (int i = 1; i <= TestCase; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << num1+num2 << endl;
    }
}