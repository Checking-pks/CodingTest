#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        string text;
        int test=0;
        cin >> text;
        
        for (int j=0; j<text.length(); j++) {
            
            if (text[j] == '(') {
                test++;
            } else if (text[j] /= ')') {
                test--;
            }
            
            if (test < 0) {
                break;
            }
            
        }
        
        if (test == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
