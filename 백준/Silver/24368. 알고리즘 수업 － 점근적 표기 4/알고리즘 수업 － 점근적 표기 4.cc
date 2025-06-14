#include <iostream>

using namespace std;

int a2, a1, a0, c, n0;

bool simulate()
{
    a2 -= c;
    
    if (a2 > 0) return 0;
    if (a2 == 0 && a1 > 0) return 0;
    if (a2 == 0 && a1 == 0 && a0 > 0) return 0;
    
    if (-a1 <= 2 * a2 * n0 && - a1 * a1 + 4 * a2 * a0 < 0)
        return 0;
    
    return (a2 * n0 * n0 + a1 * n0 + a0 <= 0);
}

int main()
{
    cin >> a2 >> a1 >> a0 >> c >> n0;
    cout << simulate();
}