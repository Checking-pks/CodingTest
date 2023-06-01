#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    while (num--) {
        string str;
        cin >> str;
        
        if ((str.back() - '0') & 1) cout << "odd\n";
        else cout << "even\n";
    }
}