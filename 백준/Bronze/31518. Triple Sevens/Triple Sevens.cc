#include <iostream>

using namespace std;

bool simulate(int n)
{
    bool is7 = false;
    
    for (int i = 0, num; i < n; i++)
    {
        cin >> num;
        if (num == 7) is7 = true;
    }
    
    return is7;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n, res = 777;
    cin >> n;
    
    for (int i = 0; i < 3; i++)
        if (!simulate(n))
            res = 0;
    
    cout << res;
} 