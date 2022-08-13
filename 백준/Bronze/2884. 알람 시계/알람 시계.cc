#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int h,m;
    
    cin >> h >> m;
    
    m -= 45;
    
    if (m<0) {
        h--;
        m+=60;
        
        if (h<0) {
            h=23;
        }
    }
    
    cout << h << " " << m;
}
