#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    if (a < b) cout << "Bus";
    if (a > b) cout << "Subway";
    if (a == b) cout << "Anything";
}