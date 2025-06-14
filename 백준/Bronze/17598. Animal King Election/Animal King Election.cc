#include <iostream>

using namespace std;

int main()
{
    int T = 0, L = 0;
    
    for (int i = 0; i < 9; i++)
    {
        string s;
        cin >> s;
        
        if (s[0] == 'T') T++;
        else L++;
    }
    
    cout << (T > L ? "Tiger" : "Lion");
}