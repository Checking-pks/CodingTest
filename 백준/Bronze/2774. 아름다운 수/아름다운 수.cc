#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    while (testcase--) {
        unordered_set<char> r;
        string s;
        cin >> s;
        
        for (char c:s)
            r.insert(c);
        
        cout << r.size() << "\n";
    }
}