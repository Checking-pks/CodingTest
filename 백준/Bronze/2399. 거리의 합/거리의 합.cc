#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    
    vector<ll> nList(n);
    for (int i = 0; i < n; i++)
        cin >> nList[i];
    
    ll result = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            result += abs(nList[i] - nList[j]);
    
    cout << result;
}