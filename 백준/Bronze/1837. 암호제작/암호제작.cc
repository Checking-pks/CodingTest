#include <iostream>
#include <string>

using namespace std;

int mod(string x, int d) {
    int remainder = 0;
    
    for (char digit : x) 
        remainder = (remainder * 10 + (digit - '0')) % d;
    
    return remainder;
}

int main() {
    string x;
    int k;
    cin >> x >> k;

    for (int i = 2; i < k; i++) {
        if (mod(x, i) == 0) {
            cout << "BAD " << i << endl;
            return 0;
        }
    }

    cout << "GOOD" << endl;
    return 0;
}
