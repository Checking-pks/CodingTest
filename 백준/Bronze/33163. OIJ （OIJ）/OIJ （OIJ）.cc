#include <iostream>

using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'J') cout << 'O';
        if (s[i] == 'O') cout << 'I';
        if (s[i] == 'I') cout << 'J';
    }
}  