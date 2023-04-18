#include <iostream>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    
    cout << ((n * 100 >= p) ? "Yes" : "No");
}