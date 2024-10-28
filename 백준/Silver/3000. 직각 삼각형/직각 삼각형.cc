#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    
    map<ll, ll> axisX, axisY;
    vector<pair<ll, ll>> pos(N);
    for (ll i=0, x, y; i<N; i++)
    {
        cin >> x >> y;
        
        pos[i] = {x, y};
        
        axisX[x]++;
        axisY[y]++;
    }
    
    ll result = 0;
    for (ll i=0, x, y; i<N; i++)
    {
        x = pos[i].first;
        y = pos[i].second;
        
        result += (axisX[x] - 1) * (axisY[y] - 1);
    }
    
    cout << result;
}