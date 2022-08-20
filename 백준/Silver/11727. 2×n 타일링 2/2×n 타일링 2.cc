#include <iostream>

using namespace std;

int main() {
    int num, result = 1;
    cin >> num;
    
    for (int i=1; i<num; i++) 
        result = (result * 2 + ((i&1) ? 1 : -1)) % 10007;

	cout << result;
}