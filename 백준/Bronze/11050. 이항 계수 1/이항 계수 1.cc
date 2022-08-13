#include <iostream>

using namespace std;

int main() {
    int n, k;
    double result = 1.0;
    cin >> n >> k;

    for (int i=2; i<=n; i++)
        result *= i;

    for (int i=2; i<=k; i++) 
        result /= i;

    for (int i=2; i<=(n-k); i++)
        result /= i;

    cout << result;
    
    return 0;
}