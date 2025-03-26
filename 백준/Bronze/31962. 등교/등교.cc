#include <iostream>

using namespace std;

int main()
{
    int N, X, result = -1;
    cin >> N >> X;
    
    for (int i = 0, S, T; i < N; i++)
    {
        cin >> S >> T;
        
        if (S + T > X) continue;
        result = max(result, S);
    }
    
    cout << result;
}