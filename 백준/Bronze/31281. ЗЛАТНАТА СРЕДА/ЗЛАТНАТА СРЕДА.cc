#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    long long a, b, c;
    cin >> a >> b >> c;
    
    cout << (a + b + c) - min(min(a, b), c) - max(max(a, b), c);
} 