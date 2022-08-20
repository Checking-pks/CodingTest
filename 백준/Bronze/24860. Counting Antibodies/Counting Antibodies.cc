#include <iostream>

using namespace std;

int main() {
    long long result = 0;
    int n1, n2, n3;
	
    cin >> n1 >> n2;
    result += n1 * n2;
    cin >> n1 >> n2;
    result += n1 * n2;
    cin >> n1 >> n2 >> n3;
    result *= n1 * n2 * n3;
    
    cout << result;
}