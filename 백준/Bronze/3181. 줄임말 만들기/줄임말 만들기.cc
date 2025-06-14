#include <iostream>
#include <set>

using namespace std;

set<string> skip = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};

int main()
{
    string s;
    cin >> s;
    
    cout << char(s[0] - 'a' + 'A');
    
    while (cin >> s)
    {
        if (skip.find(s) != skip.end())
            continue;
        
        cout << char(s[0] - 'a' + 'A');
    }
}