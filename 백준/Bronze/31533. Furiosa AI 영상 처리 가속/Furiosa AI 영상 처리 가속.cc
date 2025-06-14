#include <iostream>

using namespace std;

int main()
{
    double a, m, n;
    cin >> a >> m >> n;
    
    cout << fixed;
    cout.precision(7);
    
    cout << min(min(m / a * 2, max(m / a, n)), min(n / a * 2, max(n / a, m)));
}