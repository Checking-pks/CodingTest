#include <iostream>
#include <string>

using namespace std;

int main() {
    int result = 0;
    int num;
    cin >> num;

    for (; num > 0; num /= 10) {
        int nowNum = num % 10;
        result += nowNum * nowNum * nowNum * nowNum * nowNum;
    }

    cout << result;
    
    return 0;
}