#include <iostream>

using namespace std;

int main() {
    int b=0,c=0;
    string str;
    cin >> str;
    
    for (char s:str) {
        if (s == 'B') b++;
        if (s == 'C') c++;
    }
    
    cout << b/2 + c/2;
}