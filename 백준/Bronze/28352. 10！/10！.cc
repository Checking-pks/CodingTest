#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    long long result = 1;
    
    for (int i=2; i<=num; i++)
        result *= i;
    
    cout << result / 604800;
}