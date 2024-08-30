#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, result = 0;
    cin >> n;
    
    vector<pair<ll, ll>> trees(n);
    for (ll i=0; i<n; i++)
        cin >> trees[i].first;
        
    for (ll i=0; i<n; i++) 
        cin >> trees[i].second;
        
    sort(trees.begin(), trees.end(), cmp);
        
    for (ll i=0; i<n; i++)  
        result += trees[i].first + trees[i].second * i;
    
    cout << result;
}