#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll T;
    cin >> T;
    
    while (T--) {
        ll N;
        cin >> N;
        cout << (N > 1 ? "0 1\n" : "1 0\n");
    }
}