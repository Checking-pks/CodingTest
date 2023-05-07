#include <iostream>

using namespace std;

int main() {
    int result = 1;
    string str;
    cin >> str;
    
    for (char c:str)
        if (c == ',')
            result++;
    
    cout << result;
}