#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        ll N, K;
        cin >> N >> K;
        
        if (N < K)
            cout << 2 * N * (N + 1) << "\n";
        else
            cout << -2 * (K * K + (1 - 2 * N) * K - 2 * N) << "\n";
    }
}