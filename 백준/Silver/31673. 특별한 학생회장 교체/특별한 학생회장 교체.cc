#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    ll N, M, voteSum = 0;
    cin >> N >> M;
    
    vector<ll> nList(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> nList[i];
        voteSum += nList[i];
    }
    
    sort(nList.begin(), nList.end());
    
    for (ll i = 0, voteNow = 0; i < N; i++)
    {
        voteNow += nList[i];
        
        if (voteNow * 2 > voteSum)
        {
            N -= i - 1;
            break;
        }
    }
    
    cout << M / N;
}