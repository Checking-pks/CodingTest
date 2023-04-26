#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    while (str != "0") {
        while (str.length() > 1) {
            int sum = 0;
            
            for (char c:str) 
                sum += c - '0';
            
            str = to_string(sum);
        }

		cout << str << "\n";
        cin >> str;
    }
}