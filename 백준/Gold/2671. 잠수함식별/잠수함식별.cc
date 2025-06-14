#include <iostream>

using namespace std;

bool simulate(string s)
{
    if (s.length() < 2) return false;
    if (s[0] == '1' && s.length() < 4) return false;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            if (++i < s.length() && s[i] == '1')
                continue;
            else if (i - 2 >= 0 && s[i - 2] == '1')
            {
                if (i - 3 >= 0 && s[i - 3] == '1')
                {
                    i -= 3;
                    continue;
                }
                else return false;
            }
            else
                return false;
        }
        else
        {
            if (++i < s.length() && s[i] == '0')
            {
                if (++i < s.length() && s[i] == '0')
                {
                    while (s[i] == '0') i++;
                    i--;
                }
                else return false;
                
                if (++i < s.length() && s[i] == '1')
                {
                    while (s[i] == '1') i++;
                    i--;
                }
                else return false;
            }
            else return false;
        }
    }
    
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << (simulate(s) ? "SUBMARINE" : "NOISE");
}