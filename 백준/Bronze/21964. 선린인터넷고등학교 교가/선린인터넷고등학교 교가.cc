#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << s.substr(n-5);
}