#include <iostream>
using namespace std;

int main() {
    int normal, added, testcase;
    cin >> normal >> added >> testcase;
    
    for (int i=0, use; i<testcase; i++) {
        cin >> use;
        
        if (use > 1000)
            cout << use << " " << 1000 * normal + (use - 1000) * added << "\n";
        else
            cout << use << " " << use * normal << "\n";
    }
}