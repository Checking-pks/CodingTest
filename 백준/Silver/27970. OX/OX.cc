#include <iostream>

using namespace std;

typedef long long ll;

const ll DIV = 1000000007;

int main()
{
    ll result = 0, t = 1;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'O')
            result += t;
        
        result %= DIV;
        t <<= 1;
        t %= DIV;
    }
    
    cout << result;
}