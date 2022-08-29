#include <iostream>
#include <string>

using namespace std;

int main() {
    string result = "";
    int people, area;
    cin >> people >> area;
    
    for (int i=0; i<5; i++) {
        int guess;
        cin >> guess;
        
        result += to_string(guess - people * area) + " ";
    }
    
    cout << result;
}