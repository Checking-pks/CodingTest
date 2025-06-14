#include <iostream>

using namespace std;

int main()
{
    int aeiou = 0, y = 0;
    string s;
    cin >> s;
    
    for (char c : s)
    {
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                aeiou++;
                break;
            case 'y':
                y++;
                break;
        }
    }
    
    cout << aeiou << " " << aeiou + y;
}