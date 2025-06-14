#include <iostream>

using namespace std;

void simulate()
{
    double p, q;
    cin >> p >> q;
    cout << "f = " << p * q / (p + q) << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    cout << fixed;
    cout.precision(1);
    
    while (T--)
        simulate();
} 