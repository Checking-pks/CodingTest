#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, result = 665;
    cin >> num;

    while (num) {
        result++;
        
        if (to_string(result).find("666") != string::npos)
            num--;
    }

    cout << result;

    return 0;
}