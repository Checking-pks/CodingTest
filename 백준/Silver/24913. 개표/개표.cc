#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll N, Q;
    cin >> N >> Q;
    
    vector<ll> nList(N + 2);
    
    ll voteOther = 0, maxOther = 0, voteMe = 0;
    for (ll i = 0, a, b, c; i < Q; i++)
    {
        cin >> a >> b >> c;
        
        if (a & 1)
        {
            if (c == N + 1)
            {
                voteMe += b;
                continue;
            }
            
            voteOther += b;
            nList[c] += b;
            
            maxOther = max(maxOther, nList[c]);
        }
        else
        {
            if (voteMe + b <= maxOther ||
                voteMe + b <= (voteOther + c + N - 1) / N)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}