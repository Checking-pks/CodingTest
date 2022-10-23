#include <iostream>

using namespace std;

int main() {
    int n, w, h, l, max;
    cin >> n >> w >> h >> l;
    
    max = int(w/l) * int(h/l);
    
    cout << ((n > max) ? max : n);
}