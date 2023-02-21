#include <iostream>

using namespace std;

int main() {
    int result = 0;
    string str;
    cin >> str;
    
    for (char c:str) 
		result += (c==':') + 5 * (c=='_') + 1;
    
    cout << result;
}