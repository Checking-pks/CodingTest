#include <iostream>

using namespace std;

int main()
{
    int N, mini = 1000000001, idx = 0;
    cin >> N;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        
        if (mini > now)
        {
            mini = now;
            idx = i;
        }
    }
    
    cout << idx;
}