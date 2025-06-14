#include <iostream>

using namespace std;

int main()
{
    int K, N = 0, result = 0;
    cin >> K;
    
    while (K > 1)
    {
        bool isDiv = false;
        
        for (int i = 2; i < K; i++)
        {
            if (K % i == 0)
            {
                N++;
                K /= i;
                isDiv = true;
                break;
            }
        }
        
        if (!isDiv)
            break;
    }
    
    for (int i = 0; (1 << i) <= N; i++)
        result++;
    
    cout << result;
}