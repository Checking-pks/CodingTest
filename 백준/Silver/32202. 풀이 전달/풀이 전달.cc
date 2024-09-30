#include <iostream>

using namespace std;

typedef long long ll;

ll DIVISION = 1e+9 + 7;

int main()
{
    ll N;
    cin >> N;
    
    pair<ll, ll> result = {1, 0};
    while (N--) {
        result = {(result.first + result.second) * 2, result.first};
        
        result.first %= DIVISION;
        result.second %= DIVISION;
    }
    
    cout << (result.first + result.second) % DIVISION;
}