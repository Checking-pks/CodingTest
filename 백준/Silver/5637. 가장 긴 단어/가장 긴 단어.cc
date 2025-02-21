#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    string s, result;
    cin >> s;
    
    while (s != "E-N-D")
    {
        string now = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') ||
                ('A' <= s[i] && s[i] <= 'Z') ||
                (s[i] == '-'))
            {
                now += s[i];
            }
            else
            {
                if (count < now.length())
                {
                    count = now.length();
                    result = now;
                }
                
                now = "";
            }
        }
        
        if (count < now.length())
        {
            count = now.length();
            result = now;
        }
        
        cin >> s;
    }
    
    for (int i = 0; i < count; i++)
    {
        if ('A' <= result[i] && result[i] <= 'Z')
            cout << char(result[i] + 32);
        else
            cout << result[i];
    }
}