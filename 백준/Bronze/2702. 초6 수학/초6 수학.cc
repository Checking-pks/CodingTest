#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    else return gcd(b, a % b);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << a * b / gcd(a, b) << " " << gcd(a, b) << "\n";
    }
}