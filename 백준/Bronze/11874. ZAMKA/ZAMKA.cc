#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int L, D, X;
    cin >> L >> D >> X;
    
    for (int i = L; i <= D; i++)
    {
        int sum = 0;
        string s = to_string(i);
        
        for (char c:s)
            sum += c - '0';
        
        if (sum == X)
        {
            cout << i << "\n";
            break;
        }
    }
    
    for (int i = D; i >= L; i--)
    {
        int sum = 0;
        string s = to_string(i);
        
        for (char c:s)
            sum += c - '0';
        
        if (sum == X)
        {
            cout << i << "\n";
            break;
        }
    }
} 