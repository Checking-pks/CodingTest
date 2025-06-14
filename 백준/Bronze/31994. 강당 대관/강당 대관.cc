#include <iostream>

using namespace std;

int main() {
    string result;
    int count = 0;
    
    for (int i=0; i<7; i++) {
        string name;
        int num;
        
        cin >> name >> num;
        
        if (count < num) {
            count = num;
            result = name;
        }
    }
    
    cout << result;
}