#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, x, num;
    cin >> n >> x;
    
    for (int i=1; i <=n; i++){
        cin >> num;
        if (x > num) {
            cout << num << " ";
        }
    }
}