#include <iostream>
using namespace std;

int second(int a, int b, int c) {
    if ((a>=b) && (a>=c)) {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    } else if ((b>=a) && (b>=c)) {
        if (a>=c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (a>=b) {
            return a;
        } else {
            return b;
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << second(a, b, c);
}