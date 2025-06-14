#include <iostream>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        result += (now >> 1) + (now & 1);
    }
    
    cout << result;
}