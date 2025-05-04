#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for (int i = 1, pos = 0; true; i++)
    {
        string now = to_string(i);
        
        for (int j = 0; j < now.length(); j++)
            if (s[pos] == now[j])
                pos++;
        
        if (pos >= s.length())
        {
            cout << i;
            break;
        }
    }
}