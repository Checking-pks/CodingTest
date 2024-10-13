#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<vector<int>> field(N + 1, vector<int>(N + 1));
    vector<vector<vector<int>>> milk(3, vector<vector<int>>(N + 1, vector<int>(N + 1)));
    for (int i=1; i<=N; i++)
        for (int j=1; j<=N; j++)
            cin >> field[i][j];
    
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            
            int now = field[i][j];
            
            if (!now) milk[0][i][j] = 1;
            
            int before = (now + 2) % 3;
            
            if (milk[before][i - 1][j])
                milk[now][i][j] = max(milk[now][i][j], milk[before][i - 1][j] + 1);
            
            if (milk[before][i][j - 1])
                milk[now][i][j] = max(milk[now][i][j], milk[before][i][j - 1] + 1);
            
            for (int k=0; k<3; k++) {
                milk[k][i][j] = max(milk[k][i][j], milk[k][i - 1][j]);
                milk[k][i][j] = max(milk[k][i][j], milk[k][i][j - 1]);
            }
        }
    }
    
    cout << max(milk[0][N][N], max(milk[1][N][N], milk[2][N][N]));
}