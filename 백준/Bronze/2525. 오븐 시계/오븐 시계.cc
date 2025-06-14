#include <iostream>

using namespace std;

int main() {
    int h, m, t;
    cin >> h >> m >> t;
    t += h * 60 + m;
    
    cout << (t / 60) % 24 << " " << t % 60;
}