#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<vector<int>>> field(K, vector<vector<int>>(K, vector<int>(26)));
    vector<vector<vector<int>>> tiles(K, vector<vector<int>>(K, vector<int>(2)));
    
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        
        for (int j = 0; j < M; j++)
        {
            int r = i % K;
            int c = j % K;
            int t = s[j] - 'A';
            
            field[r][c][t]++;
            
            if (field[r][c][t] > tiles[r][c][1])
                tiles[r][c] = {t, field[r][c][t]};
        }
    }
    
    int result = 0;
    for (int i = 0; i < K; i++)
        for (int j = 0; j < K; j++)
            result += (N / K) * (M / K) - tiles[i][j][1];
    
    cout << result << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << char(tiles[i % K][j % K][0] + 'A');
        cout << "\n";
    }
}