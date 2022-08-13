#include <iostream>

using namespace std;

int main() {
    while (true) {
        int num1, num2;
        cin >> num1 >> num2;

        if (num1 + num2 == 0)
            break;

        cout << ((num1 > num2) ? "Yes" : "No") << "\n";
    }

    return 0;
}