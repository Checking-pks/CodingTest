#include <iostream>

using namespace std;

void simulate()
{
    int E, N, result = 0;
    cin >> E >> N;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        
        if (E < now)
            result++;
    }
    
    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        simulate();
} 