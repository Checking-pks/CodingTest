#include <iostream>

using namespace std;

int len;
string s;

bool simulate()
{
    for (int i = 0; i < len; i++)
    {
        int j, diffCount = 0;
        for (j = i; j >= 0; j--)
        {
            if (s[j] == s[len + j - i - 1]) continue;
            
            diffCount++;
            
            if (diffCount > 1) break;
        }
        
        if (j == -1 && diffCount == 1)
            return true;
    }
    
    return false;
}

int main()
{
    cin >> len >> s;
    
    cout << (simulate() ? "YES" : "NO");
}