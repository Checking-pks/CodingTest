#include <iostream>

using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    
    int cnt = a * b;
    cout << d * (cnt / 12 + (cnt % 12 != 0));
}