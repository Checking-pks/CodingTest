#include <iostream>

using namespace std;

int T, X, N;

bool simulate()
{
    for (int i = 0, K; i < N; i++)
    {
        cin >> K;
        bool isAttend = false;
        for (int j = 0, C; j < K; j++)
        {
            cin >> C;
            
            if (C == X) isAttend = true;
        }
        
        if (!isAttend) return false;
    }
    
    return true;
}

int main()
{
    cin >> T >> X >> N;
    cout << (simulate() ? "YES" : "NO");
}