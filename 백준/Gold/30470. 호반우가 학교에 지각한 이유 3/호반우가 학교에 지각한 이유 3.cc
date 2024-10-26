#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll N, result = 0;
    cin >> N;
    
    priority_queue<pair<ll, ll>> bucket;
    
    while (N--)
    {
        ll a, b;
        cin >> a >> b;
        
        if (a == 1)
        {
            result += b;
            bucket.push({b, 1});
            continue;
        }
        
        if (bucket.empty())
            continue;
        
        ll len = bucket.top().first - b, count = 0;
        if (len <= 0)
            len = 0;
        
        while (bucket.size() && bucket.top().first > len)
        {
            result -= (bucket.top().first - len) * bucket.top().second;
            count += bucket.top().second;
            bucket.pop();
        }
        
        if (count)
            bucket.push({len, count});
    }
    
    cout << result;
}