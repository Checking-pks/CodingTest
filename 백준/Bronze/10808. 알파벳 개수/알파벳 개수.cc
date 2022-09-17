#include <iostream>
#include <string>

using namespace std;

int main() {
    int alphabet['z' - 'a' + 1] = {};
    string str;
    cin >> str;
    
    for (char c:str)
        alphabet[c - 'a']++;
    
    for (int n:alphabet)
        cout << n << " ";
}