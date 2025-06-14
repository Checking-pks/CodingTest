#include <iostream>

using namespace std;

int main()
{
    bool l = false, k = false, p = false;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        
        if (s[0] == 'l') l = true;
        if (s[0] == 'k') k = true;
        if (s[0] == 'p') p = true;
    }
    
    cout << (l && k && p ? "GLOBAL" : "PONIX");
}