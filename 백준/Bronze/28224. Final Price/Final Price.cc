#include <iostream>

using namespace std;

int main() {
    int num, result = 0;
    cin >> num;
    
    for (int i=0, nowNum; i<num; i++) {
        cin >> nowNum;
        result += nowNum;
    }
    
    cout << result;
}