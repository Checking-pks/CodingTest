#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int people, a, b, round=0;
    cin >> people >> a >> b;
    
    for (;people>=1; people = people>>1) {
        a = (a+1)/2;
        b = (b+1)/2;
        round++;
        if (a==b) {
            break;
        }
    }
    
    cout << round;
}
