#include <iostream>

using namespace std;

int main() {
    long long n1, n2;
    cin >> n1 >> n2;
    
    long long result = n1 - n2;
    
    if (result < 0)
        result = -result;
    
    cout << result;
    
    return 0;
}