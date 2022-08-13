#include <iostream>

using namespace std;

int main() {
    int result = 0;

    for (int i=0; i<5; i++) {
        int num;
        cin >> num;

        result += num;
    }

    cout << result;

    return 0;
}