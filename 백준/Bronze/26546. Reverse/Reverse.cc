#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        string str;
        int first, second;
        
        cin >> str >> first >> second;
        
        for (int j=0; j<str.length(); j++) {
            if (first <= j && j < second) continue;
            cout << str[j];
        }

		cout << "\n";
    }
}