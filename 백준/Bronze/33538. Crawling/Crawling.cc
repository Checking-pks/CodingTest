#include <iostream>

using namespace std;

bool simulate()
{
    int l, n;
    double t;
    
    cin >> l >> n >> t;
    
    for (int i = 0; i < n; i++)
    {
        double f, b;
        cin >> f >> b;
        
        double now = l / f + l / b;
        
        if (now < t)
            return true;
    }
    
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cout << (simulate() ? "HOPE" : "DOOMED");
}