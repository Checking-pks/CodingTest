#include <iostream>

using namespace std;

int main()
{
    long long N, stack = 0, result = 0;
    cin >> N;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        stack += (now ? 1 : -1);
        result += stack;
    }
    
    cout << result;
}