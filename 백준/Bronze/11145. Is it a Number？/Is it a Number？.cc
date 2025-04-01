#include <iostream>

using namespace std;

string simulate()
{
    string s, result = "";
    getline(cin, s);
    
    while (s.length() && s.back() == ' ') s.pop_back();
    
    if (s.empty()) return "invalid input";
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (result.length())
                return "invalid input";
            else
                continue;
        }
        
        if ('0' > s[i] || s[i] > '9')
            return "invalid input";
        
        result += s[i];
    }
    
    while (result[0] == '0')
        result = result.substr(1);
    
    return (result.length() ? result : "0");
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--)
        cout << simulate() << "\n";
}