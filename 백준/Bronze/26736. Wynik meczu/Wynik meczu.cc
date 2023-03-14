#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    string str;
    cin >> str;
    
    for (int i=0;i<str.length();i++) {
        if (str[i] == 'A') a++;
        if (str[i] == 'B') b++;
    }
    
    cout << a << " : " << b;
}