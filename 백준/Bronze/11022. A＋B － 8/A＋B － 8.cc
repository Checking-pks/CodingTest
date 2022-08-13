#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size;
    cin >> size;
    
    for (int i=1; i <= size; i++) {
        int a,b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " 
            << b << " = " << a+b << "\n";
    }
}