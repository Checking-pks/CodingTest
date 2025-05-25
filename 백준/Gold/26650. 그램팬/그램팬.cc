#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;

    ll result = 0, combo = 0;
    
    for (ll i = 0, stackA = 0, stackZ = 0, alpha = 0; i < s.length(); i++)
    {
        ll now = s[i] - 'A';
        
        if (now == alpha)
        {
            alpha++;
        }
        else if (now != alpha - 1)
        {
            result += combo;
            
            alpha = stackA = (now == 0);
            stackZ = 0;
            combo = 0;
            
            continue;
        }
        
        if (now == 0) stackA++;
        if (now == 25) stackZ++;
        
        if (alpha >= 25)
        {
            combo = max(combo, stackA * stackZ);
        }
    }
    
    cout << result + combo;
}