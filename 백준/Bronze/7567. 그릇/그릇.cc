#include <iostream>

using namespace std;

int main() {
    int r = 0;
    string d, l = "";
    cin >> d;
    
    for (char n:d) {
        r += ((n == l[0]) ? 5 : 10);
        l = n;
    }
    
    cout << r;
}