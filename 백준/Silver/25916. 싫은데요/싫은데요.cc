#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll N, M, sum = 0, result = 0;
    cin >> N >> M;
    
    vector<ll> nList(N);
    
    for (ll i = 0, j = 0; j < N; j++)
    {
        cin >> nList[j];
        
        sum += nList[j];
        
        while (sum > M)
            sum -= nList[i++];
        
        result = max(result, sum);
    }
    
    cout << result;
}