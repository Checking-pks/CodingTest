#include <iostream>

using namespace std;

int N, K;

void simulate(int now, string S)
{
    if (K <= 0) return;
    if (now < 0) return;
    
    if (!now)
    {
        K--;
        
        if (!K)
            cout << S;
        return;
    }
    
    for (int i = 1; i <= 3; i++)
        simulate(now - i, S + "+" + to_string(i));
}

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= 3; i++)
        simulate(N - i, to_string(i));
    
    if (K > 0)
        cout << -1;
}