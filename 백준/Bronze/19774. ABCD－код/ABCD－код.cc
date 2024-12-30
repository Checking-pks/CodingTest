#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    
    int n1, n2;
    
    if (s.length() < 3)
        n1 = n2 = stoi(s);
    else
    {
        n1 = stoi(s.substr(0, 2));
        n2 = stoi(s.substr(s.length() - 2));
    }
    
    cout << ((n1 * n1 + n2 * n2) % 7 == 1 ? "YES\n" : "NO\n");
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        solve();
}