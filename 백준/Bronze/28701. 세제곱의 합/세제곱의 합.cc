#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = n * (n+1) / 2;
    
    cout << sum << "\n"
        << sum * sum << "\n"
        << sum * sum;
}