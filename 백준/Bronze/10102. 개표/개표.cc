#include <iostream>

using namespace std;

int main() {
    int len, score = 0;
    string str;
    cin >> len >> str;
    
    for (char c:str) {
        if (c == 'A') score++;
        else score--;
    }
    
    if (score > 0) cout << "A";
    else if (score < 0) cout << "B";
    else cout << "Tie";
}