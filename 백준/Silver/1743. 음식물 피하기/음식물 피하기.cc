#include <iostream>
#include <vector>

using namespace std;

int N, M, K, result = 0;
vector<vector<bool>> field;

int simulate(int x, int y)
{
    if (x < 0 || x >= N) return 0;
    if (y < 0 || y >= M) return 0;
    if (!field[x][y]) return 0;
    
    field[x][y] = false;
    
    return 1 + simulate(x + 1, y) + simulate(x - 1, y) 
            + simulate(x, y + 1) + simulate(x, y - 1);
}

int main()
{
    cin >> N >> M >> K;
    
    field = vector<vector<bool>>(N, vector<bool>(M));
    
    for (int i = 0, x, y; i < K; i++)
    {
        cin >> x >> y;
        field[x - 1][y - 1] = true;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!field[i][j]) continue;
            
            int now = simulate(i, j);
            
            result = max(result, now);
        }
    }
    
    cout << result;
}