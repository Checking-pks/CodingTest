#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int now, res = 1;
        cin >> now;
        
        for (int i = 2; i <= now; i++)
            res *= i;
        
        cout << res % 10 << "\n";
    }
}