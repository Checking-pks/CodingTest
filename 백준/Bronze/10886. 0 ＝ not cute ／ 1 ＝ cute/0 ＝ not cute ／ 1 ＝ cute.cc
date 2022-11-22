#include <iostream>

using namespace std;

int main() {
    int num, count = 0;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        bool isCute;
        cin >> isCute;
        
        count += (isCute ? 1 : -1);
    }
    
    cout << ((count > 0) ? "Junhee is cute!" : "Junhee is not cute!");
}