#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int R, C, K;
    cin >> R >> C >> K;
    
    vector<vector<vector<int>>> field(R + 1, vector<vector<int>>(C + 1, vector<int>(3)));
    
    for (int i = 1; i <= R; i++)
    {
        string s;
        cin >> s;
        
        for (int j = 1; j <= C; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                field[i][j][k] = field[i][j - 1][k]
                                + field[i - 1][j][k] 
                                - field[i - 1][j - 1][k];
            }
            
            if (s[j - 1] == 'J') field[i][j][0]++;
            if (s[j - 1] == 'O') field[i][j][1]++;
            if (s[j - 1] == 'I') field[i][j][2]++;
        }
    }
    
    for (int i = 0, a, b, c, d; i < K; i++)
    {
        cin >> a >> b >> c >> d;
        
        for (int j = 0; j < 3; j++)
        {
            cout << field[c][d][j] 
                - field[a - 1][d][j] 
                - field[c][b - 1][j] 
                + field[a - 1][b - 1][j]
                << " ";
        }
        
        cout << "\n";
    }
}