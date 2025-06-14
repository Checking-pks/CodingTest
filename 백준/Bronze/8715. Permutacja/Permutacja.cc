#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll N, sum = 0;
    cin >> N;
    
    for (ll i = 0, now; i < N; i++)
    {
        cin >> now;
        sum += now;
    }
    
    cout << (sum == N * (N + 1) / 2 ? "TAK" : "NIE");
}