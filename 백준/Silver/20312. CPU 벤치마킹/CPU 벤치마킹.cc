#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
const ll DIV = 1e+9 + 7;

int main()
{
    ll N, result = 0;
    cin >> N;
    
    vector<ll> nList(N);
    for (int i = 1; i < N; i++)
        cin >> nList[i];
    
    for (ll i = N - 1, last = 0; i >= 0; i--)
    {
        last = (last + 1) * nList[i];
        last %= DIV;
        result += last;
        result %= DIV;
    }
    
    cout << result;
}