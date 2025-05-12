#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string s;
    cin >> s;
    
    string output(s.length(), 'X');
    for (int i = 0; i < s.length(); i++)
    {
        int pos = -1, num = 27;
        
        for (int j = s.length() - 1; j >= 0; j--)
        {
            if (output[j] == 'O')
            {
                if (pos > -1) break;
                else continue;
            }
            
            if (num >= (s[j] - 'A'))
            {
                num = s[j] - 'A';
                pos = j;
            }
        }
        
        output[pos] = 'O';
        
        for (int j = 0; j < s.length(); j++)
            if (output[j] == 'O')
                cout << s[j];
        
        cout << "\n";
    }
}