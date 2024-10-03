#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll N, K, l = 0, r = 0, m;
    cin >> N >> K;
    
    vector<ll> nList(N);
    for (int i=0; i<N; i++) {
        cin >> nList[i];
        r = max(r, nList[i]);
    }
    
    while (l <= r) {
        m = (l + r) / 2;
        
        ll sum = 0;
        for (int i=0; i<N; i++)
            if (nList[i] > m)
                sum += nList[i] - m;
        
        if (sum <= K)
            r = m - 1;
        else
            l = m + 1;
    }
    
    cout << l;
}