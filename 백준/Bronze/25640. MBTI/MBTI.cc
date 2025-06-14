#include <iostream>

using namespace std;

int main() {
    string me;
    int num, result = 0;
    cin >> me >> num;
    
    for (int i=0; i<num; i++) {
        string you;
        cin >> you;
        
        result += (me == you);
    }
    
    cout << result;
}