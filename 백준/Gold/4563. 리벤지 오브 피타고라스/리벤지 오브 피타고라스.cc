#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll A;
    cin >> A;
    
    while (A)
    {
        ll result = 0, squareA = A * A;
        
        for (ll i = 1, S, B; i <= A; i++)
        {
            if (squareA % i) continue;
            
            S = squareA / i;
            if ((S + i) & 1) continue;
            
            B = (S - i) / 2;
            if (A < B) result++;
        }
        
        cout << result << "\n";
        cin >> A;
    }
}