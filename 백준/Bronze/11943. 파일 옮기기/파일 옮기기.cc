#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << ((a + d < c + b) ? a + d : c + b);
}