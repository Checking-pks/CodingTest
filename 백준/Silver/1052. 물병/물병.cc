#include <iostream>
using namespace std;

int n, k;

int watering(int w) {
    int bottle = 0, water = w;
    
    for (int i=1; water>0; i*=10) {
        int binary = water & 1;
        
        if (binary == 1) {
            bottle++;
        }
        
        water = water >> 1;
    }
    
    if (bottle > k) {
        return 1 + watering(w+1);
    } else {
        return 0;
    }
    
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> n >> k;
    
    cout << watering(n) << "\n";
    
}
