#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    int sum = A + B + C + D - 2;
    
    cout << sum % 4 + 1;
}