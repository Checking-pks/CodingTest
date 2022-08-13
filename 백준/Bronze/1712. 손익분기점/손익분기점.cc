#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a, b, c;
    cin >> a >> b >> c;
    if (b < c) {
        cout << int(a/(c-b))+1;
    } else {
        cout << "-1";
    }
}