#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int k, d, result = 0;
    cin >> k >> d;
    
    for (int i = 1; d > 0; i *= 2)
    {
        if (k * i > d) break;
        
        d -= k * i;
        result++;
    }
    
    cout << result;
} 