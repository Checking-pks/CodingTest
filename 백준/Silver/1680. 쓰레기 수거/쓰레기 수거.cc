#include <iostream>

using namespace std;

void simulate()
{
    int W, N;
    cin >> W >> N;
    
    int pos = 0, weight = 0, result = 0;
    for (int i = 0, nowPos, nowWeight; i < N; i++)
    {
        cin >> nowPos >> nowWeight;
        
        if (weight + nowWeight <= W)
        {
            result += nowPos - pos;
            weight += nowWeight;
            pos = nowPos;
        }
        else
        {
            result += 3 * nowPos - pos;
            weight = nowWeight;
            pos = nowPos;
        }
        
        if (weight == W)
        {
            result += pos;
            weight = 0;
            pos = 0;
        }
    }
    
    cout << result + pos << "\n";
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