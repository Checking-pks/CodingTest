#include <iostream>

using namespace std;

bool simulate()
{
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 1; i < n; i++)
        if (s[i] != s[i - 1])
            return false;
    
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cout << (simulate() ? "Yes" : "No");
} 