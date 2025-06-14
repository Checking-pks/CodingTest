#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    
    if (X < Y) swap(X, Y);
    
    for (int i = X; i > 0; i--)
        cout << (i > Y ? 1 : 2);
}