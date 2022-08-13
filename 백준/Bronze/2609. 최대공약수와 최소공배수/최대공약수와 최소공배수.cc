#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, max=0;
    
    cin >> n >> m;
    
    if (n < m) {
        int num = n;
        n = m;
        m = num;
    }
    
    for (int i=1; i<=m; i++) {
        if ((n%i == 0) && (m%i == 0)) {
            max = i;
        }
    }
    
    cout << max << "\n" << n * (m/max);
    
}
