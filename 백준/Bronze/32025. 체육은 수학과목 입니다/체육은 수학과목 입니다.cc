#include <iostream>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    h = min(h, w);
    cout << h * 50;
}