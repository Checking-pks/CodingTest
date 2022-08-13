#include <iostream>
#include <string>

using namespace std;

int main() {
    string canSay, needSay;
    cin >> canSay >> needSay;

    cout << ((canSay.length() >= needSay.length()) ? "go" : "no");

    return 0;
}