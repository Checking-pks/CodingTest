#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    for (int i=0, n; i<num; i++) {
        cin >> n;
        cout << n << " " << n << "\n";
    }
}