#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int min, max, sum=0, list[1036], n=0;
    cin >> min >> max;
    
    for (int i=1; i<=45; i++) {
        for (int j=1; j<=i; j++) {
            n++;
            list[n] = i;
        }
    }
    
    for (int i=min; i<=max; i++) {
        sum += list[i];
    }
    
    cout << sum;
    
}