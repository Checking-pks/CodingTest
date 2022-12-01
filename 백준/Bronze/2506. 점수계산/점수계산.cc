#include <iostream>

using namespace std;

int main() {
    int times, result = 0;
    cin >> times;
    
    for (int i=0, stack = 1, isRight; i<times; i++) {
        cin >> isRight;
        
        if (isRight) {
            result += stack++;
        } else {
            stack = 1;
        }
    }
    
    cout << result;
}