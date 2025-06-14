#include <iostream>

using namespace std;

int main()
{
    int A, B, L = 0, R = 0;
    cin >> A >> B;
    
    while (A != 1 || B != 1)
    {
        if (A / B)
        {
            L += (A / B);
            A -= B * (A / B);
        }
        else
        {
            R += (B / A);
            B -= A * (B / A);
        }
        
        if (!A || !B)
        {
            L -= !A;
            R -= !B;
            
            A = max(A, 1);
            B = max(B, 1);
        }
    }
    
    cout << L << " " << R;
}