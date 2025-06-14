#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    for (int i=1; i<=num; i++) {
        if (i % 7 == 0 && i % 11 == 0) 
            cout << "Wiwat!\n";
        else if (i % 7 == 0)
            cout << "Hurra!\n";
        else if (i % 11 == 0)
            cout << "Super!\n";
        else
            cout << i << "\n";
    }
}