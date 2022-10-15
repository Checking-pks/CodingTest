#include <iostream>

using namespace std;

int main() {
    int n, m;
    
    cin >> n >> m;
    
    while (n + m != 0) {
        cout << n + m << "\n";
        cin >> n >> m;
    }
}