#include <iostream>

using namespace std;

long long combination(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    if (r > n - r) r = n - r;

    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= n - r + i;
        result /= i;
    }
    return result;
}

int main()
{
    int N, K;
    cin >> N >> K;
    
    while (N)
    {
        cout << combination(N, K) << "\n";
        cin >> N >> K;
    }
}