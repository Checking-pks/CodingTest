#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll N, Q;
    cin >> N;
    
    vector<ll> top(N), size(N);
    
    for (ll i = 0; i < N; i++) 
        cin >> top[i];
    
    for (ll i = 0; i < N; i++)
    {
        cin >> size[i];
        size[i] = top[i] - size[i];
        
        if (i) size[i] = min(size[i], size[i - 1]);
    }
    
    cin >> Q;
    for (ll i = 0, now; i < Q; i++)
    {
        cin >> now;
        ll l = 0, r = N - 1, m;
        
        while (l <= r)
        {
            m = (l + r) / 2;
            
            if (size[m] < now)
                r = m - 1;
            else
                l = m + 1;
        }
        
        cout << l << "\n";
    }
}