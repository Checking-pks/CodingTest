#include <iostream>

using namespace std;

int main() {
    int n, x, p1, p2, max;
    cin >> n >> x >> p1 >> p2;
    
    max = p1 + p2;
    
    for (int i=2; i<n; i++) {
        p1 = p2;
        cin >> p2;
        
        if (max > p1 + p2)
            max = p1 + p2;
    }
    
    cout << max * x;
}