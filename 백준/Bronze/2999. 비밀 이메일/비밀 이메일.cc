#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string S;
    cin >> S;
    
    int R, C, len = S.length();
    
    for (int i = sqrt(len); i > 0; i--)
    {
        if (len % i) continue;
        R = i;
        C = len / i;
            
        break;
    }
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cout << S[R * j + i];
}