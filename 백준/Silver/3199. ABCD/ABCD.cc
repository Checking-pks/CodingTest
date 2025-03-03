#include <iostream>

using namespace std;

int main()
{
    cout << fixed;
    cout.precision(4);
    
    double p, q, r;
    cin >> p >> q >> r;
    
    if (p != r) cout << "0";
    else cout << (p + q) * p * 2;
}