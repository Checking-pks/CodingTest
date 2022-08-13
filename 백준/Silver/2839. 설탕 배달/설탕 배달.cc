#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, bag=0;
    cin >> n;
    
    for (int i=0; i*5 <= n; i++) {
        if (i==0) {
            if (n%3==0) {
                bag = n/3;
            } else {
                bag = -1;
            }
        } else {
            if ((n-(i*5))%3==0) {
                bag= i+ ((n-(i*5))/3);
            }
        }
    }
    
    cout << bag;
}
