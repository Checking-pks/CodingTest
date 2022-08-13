#include <iostream>
#include <string>

using namespace std;

int main() {
    int strLength;
    string inputStr;
    long long result = 0;
    long long primeNum = 1;

    cin >> strLength >> inputStr;

    for (int i = 0; i < strLength; i++) {
        int alphabetNum = inputStr[i] - 'a' + 1;

        result += alphabetNum * primeNum;
        result %= 1234567891;

        primeNum *= 31;
        primeNum %= 1234567891;
    }

    cout << result << "\n";

    return 0;
}