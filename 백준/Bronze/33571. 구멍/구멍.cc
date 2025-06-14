#include <iostream>
#include <map>

using namespace std;

int main()
{
    int result = 0;
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
            case 'B':
                result++;
            case 'A':
            case 'a':
            case 'b':
            case 'D':
            case 'd':
            case 'e':
            case 'g':
            case 'O':
            case 'o':
            case 'P':
            case 'p':
            case 'Q':
            case 'q':
            case 'R':
            case '@':
                result++;
            default:
                break;
        }
    }
    
    cout << result;
}