#include <iostream>
#include <cmath>
using namespace std;


int n, r, c, size, location=0;

void quadrant() {
    size = size >> 1;
    
    if (size == 1) {
        location += r*2 + c;
        return;
    } else if (size > r && size <= c) {
        location += pow(size,2);
        c -= size;
    } else if (size <= r && size > c) {
        location += pow(size,2)*2;
        r -= size;
    } else if (size <= r && size <= c) {
        location += pow(size,2)*3;
        c -= size;
        r -= size;
    }
    
    quadrant();
    
}


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> n >> r >> c;
    
    size = pow(2,n);
    
    quadrant();
    
    cout << location;
}
