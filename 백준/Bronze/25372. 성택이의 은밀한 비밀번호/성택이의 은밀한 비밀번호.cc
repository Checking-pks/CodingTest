#include <iostream>
#include <string>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        string nowStr;
        cin >> nowStr;
        
        cout << ((nowStr.length() >=6 && nowStr.length() <= 9) ? "yes" : "no") << "\n";
    }
    
    return 0;
}