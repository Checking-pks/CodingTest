#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int now, time;
        cin >> now >> time;
        
        cout << now - (time/7) + (time/4) << "\n";
    }
}