#include <iostream>
#include <set>

using namespace std;
typedef long long ll;

ll N, M;
bool isCanMake = false;

set<ll> nSet;

void simulate(long long now) {
    if (nSet.find(now) != nSet.end())
        return;
    
    if (M == now)
        isCanMake = true;
        
    if (isCanMake || M > now)
        return;
        
    nSet.insert(now);
        
    simulate(now / 2);
    simulate(now / 2 + (now & 1));
}

int main()
{
    cin >> N >> M;
    simulate(N);
    cout << (isCanMake ? "YES" : "NO");
}