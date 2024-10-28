#include <iostream>

using namespace std;

int main()
{
    double K, D1, D2;
    cin >> K >> D1 >> D2;
    
    D1 -= D2;
    D1 /= 2;
    
    cout << K * K - D1 * D1;
}