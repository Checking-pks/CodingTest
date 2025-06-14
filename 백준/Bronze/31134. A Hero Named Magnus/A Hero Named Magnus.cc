#include <iostream>

using namespace std;

void simulate()
{
    long long x;
    cin >> x; 
    cout << 2 * x - 1 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        simulate();
} 