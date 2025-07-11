#include <iostream>
#include <string>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i=0; i<testCase; i++) {
        string str;
        cin >> str;

        cout << str.front() << str.back() << "\n";
    }
    
    return 0;
}