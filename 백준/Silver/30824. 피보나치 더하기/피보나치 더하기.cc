#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<ll> fibbList;

void getFibbList() {
    fibbList = {1, 1};
    
    while (fibbList.back() < 1e+16) {
        ll size = fibbList.size();
        fibbList.push_back(fibbList[size - 1] + fibbList[size - 2]);
    }
}

bool solve(ll k, ll x) {
    switch (k) {
        case 1:
            for (ll i=0; i<fibbList.size(); i++) {
                if (fibbList[i] == x) return true;
            }
            
            break;
        
        case 2:
            for (ll i=0; i<fibbList.size(); i++) {
                for (ll j=0; j<fibbList.size(); j++) {
                    ll now = fibbList[i] + fibbList[j];
                    if (now == x) return true;
                }
            }
            
            break;
            
        case 3:
            for (ll i=0; i<fibbList.size(); i++) {
                for (ll j=0; j<fibbList.size(); j++) {
                    for (ll k=0; k<fibbList.size(); k++) {
                        ll now = fibbList[i] + fibbList[j] + fibbList[k];
                        if (now == x) return true;
                    }
                }
            }
            
            break;
    }
    
    return false;
}

int main()
{
    getFibbList();
    
    ll T;
    cin >> T;
    
    while (T--) {
        ll k, x;
        cin >> k >> x;
        cout << (solve(k, x) ? "YES\n" : "NO\n");
    }
}