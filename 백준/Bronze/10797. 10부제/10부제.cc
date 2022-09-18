#include <iostream>

using namespace std;

int main() {
    int num, result = 0;
    cin >> num;
    
    for (int i=0; i<5; i++) {
        int carNum;
        cin >> carNum;
        
        if (num == carNum)
            result++;
    }
    
    cout << result;
}