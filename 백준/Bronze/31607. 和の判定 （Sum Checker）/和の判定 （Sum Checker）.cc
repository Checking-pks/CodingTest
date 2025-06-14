#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    
    cout << (A == B + C);
}