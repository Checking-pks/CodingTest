#include <iostream>
#include <string>

using namespace std;

int main() {
    int length, result = 0;
    string str;
    
    cin >> length >> str;
    
    for (int i=0; i<length; i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                result++;
        }
    }
    
    cout << result;
}