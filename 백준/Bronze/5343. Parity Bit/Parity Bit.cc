#include <iostream>

using namespace std;

void simulate()
{
    string s;
    cin >> s;
    
    int err = 0;
    for (int i = 0; i < s.length(); i += 8)
    {
        int cnt = 0;
        for (int j = 0; j < 7; j++)
            cnt += s[i + j] == '1';
        
        err += (cnt & 1) != (s[i + 7] - '0');
    }
    
    cout << err << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}