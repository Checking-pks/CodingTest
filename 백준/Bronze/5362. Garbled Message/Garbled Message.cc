#include <iostream>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int pos;
        while ((pos = s.find("iiing")) != string::npos)
        {
            s = s.substr(0, pos) + "th" + s.substr(pos + 5);
        }
        
        cout << s << "\n";
    }
}