#include <iostream>

using namespace std;

int main() {
    int sum = 0, min1 = 100, min2 = 100;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    sum = a + b + c + d + e + f;
    
    if (min1 > a) min1 = a;
    if (min1 > b) min1 = b;
    if (min1 > c) min1 = c;
    if (min1 > d) min1 = d;
    if (min2 > e) min2 = e;
    if (min2 > f) min2 = f;
    
    cout << sum - min1 - min2;
}