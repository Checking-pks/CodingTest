#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a + b + c + d) - min(min(a, b), min(c, d)) + 1;
}