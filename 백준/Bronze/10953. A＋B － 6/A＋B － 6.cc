#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        string num;
        cin >> num;
        cout << num[0]+num[2] - 2* '0' << "\n";
    }
}
