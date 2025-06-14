#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    for (int i=0; i<str.length(); i+=10) 
        cout << str.substr(i, 10) << "\n";
}