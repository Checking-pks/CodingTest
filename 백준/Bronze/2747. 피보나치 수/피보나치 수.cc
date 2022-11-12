#include <iostream>

using namespace std;

int main() {
    int fibNum, result = 1;
    cin >> fibNum;
    
    for (int i=2, n1=1, n2=1; i<fibNum; i++) {
        result = n1 + n2;
        n1 = n2;
        n2 = result;
    }
    
    cout << result;
}