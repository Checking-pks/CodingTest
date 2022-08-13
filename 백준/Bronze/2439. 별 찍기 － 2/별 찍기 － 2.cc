#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int star;
    cin >> star;
    
    for (int i=1; i<=star; i++) {
        for (int j=1; j <= star-i; j++) {
            cout << " ";
        }
        for (int k=1; k <= i; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}