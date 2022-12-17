#include <iostream>

using namespace std;

int main() {
    int result = 0;
    string str;
    
    while(getline(cin, str)) 
        result++;
    
    cout << result;
}