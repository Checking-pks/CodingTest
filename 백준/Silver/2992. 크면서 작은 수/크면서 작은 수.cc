#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string X, Y;
    cin >> X;
    
    Y = X;
    
    next_permutation(Y.begin(), Y.end());
    
    cout << (X >= Y ? "0" : Y);
}