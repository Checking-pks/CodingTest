#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
       
    int n, m;
    cin >> n >> m;
    
    int cards[n] = {0,};
    int c1=0, c2=1, c3=2, max=0;
    
    for (int i=0; i<n; i++) {
        cin >> cards[i];
    }
    
    for (int i=0; i<n*(n-1)*(n-2)/6; i++) {
        int num = cards[c1]+cards[c2]+cards[c3];
        c3++;
        
        if (c3 >= n) {
            c2++;
            if (c2 >= n-1) {
                c1++;
                c2 = c1+1;
            }
            c3 = c2+1;
        }
        
        if (num > max && num <= m) {
            max = num;
        }
    }
    
    cout << max;
}
