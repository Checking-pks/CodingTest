#include <iostream>

using namespace std;

int main() {
    int buttonA = 300, buttonB = 60, buttonC = 10;
    int inputTime;
    cin >> inputTime;
    
    if (inputTime % 10 > 0) {
        cout << -1;
        return 0;
    }
    
    cout << inputTime / buttonA << " ";
    inputTime %= buttonA;
    
    cout << inputTime / buttonB << " ";
    inputTime %= buttonB;
    
    cout << inputTime / buttonC;
}