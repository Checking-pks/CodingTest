#include <iostream>

using namespace std;

int main() {
    int d, h, m;
    int start = 11 * 60 + 11, end = 0;
    
    cin >> d >> h >> m;
    
    end = (d - 11) * 24 * 60 + h * 60 + m;
    
    cout << ((end >= start) ? end - start : -1);
}