#include <iostream>

using namespace std;

int main()
{
    long long N, result = 0;
    cin >> N;
    
    N = abs(N);
    
    if (N && N % 2 == 0)
    {
        cout << -1;
        return 0;
    }
    
    while (N)
    {
        N >>= 1;
        result++;
    }
    
    cout << result;
}