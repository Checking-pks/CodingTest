#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    cout << s << "\n";
    
    for (int i = 25; i > 0; i--)
    {
        for (int j = 0; j < s.length(); j++)
        {
            char now = s[j] + i;
            
            if (s[j] == ' ')
            {
                cout << s[j];
                continue;
            }
            
            if (now > 'Z') now -= 26;
            cout << now;
        }
        cout << "\n";
    }
}