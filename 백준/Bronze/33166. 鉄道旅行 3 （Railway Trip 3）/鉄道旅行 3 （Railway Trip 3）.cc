#include <iostream>

using namespace std;

int main()
{
    int P, Q, A, B;
    cin >> P >> Q >> A >> B;
    
    if (P < Q)
        cout << P * A + (Q - P) * B;
    else
        cout << Q * A;
}