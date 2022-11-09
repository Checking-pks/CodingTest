#include <iostream>

using namespace std;

int main() {
    int total = 0, now;
    
    cin >> now;
    
    while (now != -1) {
        total += now;
        cin >> now;
    }
    
    cout << total;
}