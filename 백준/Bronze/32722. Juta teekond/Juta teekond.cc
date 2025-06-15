#include <iostream>

using namespace std;

bool solve()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    if (A != 1 && A != 3) return false;
    if (B != 6 && B != 8) return false;
    if (C != 2 && C != 5) return false;
    
    return true;
}

int main()
{
    cout << (solve() ? "JAH" : "EI");
}