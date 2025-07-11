#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<int>> score(M + 1, vector<int>(N + 1));
    vector<vector<int>> airline(N + 1, vector<int>(N + 1));
    
    for (int i = 0, a, b, c; i < K; i++)
    {
        cin >> a >> b >> c;
        
        if (a > b) continue;
        
        airline[a][b] = max(airline[a][b], c);
    }
    
    for (int i = 2; i <= N; i++)
        score[2][i] = airline[1][i];
    
    for (int k = 3; k <= M; k++)
    {
        for (int i = k - 1; i <= N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                if (!airline[i][j]) continue;
                if (!score[k - 1][i]) continue;
                
                score[k][j] = max(score[k][j], score[k - 1][i] + airline[i][j]);
            }
        }
    }
    
    int result = 0;
    for (int i = 1; i <= M; i++)
        result = max(result, score[i][N]);
    
    cout << result;
}