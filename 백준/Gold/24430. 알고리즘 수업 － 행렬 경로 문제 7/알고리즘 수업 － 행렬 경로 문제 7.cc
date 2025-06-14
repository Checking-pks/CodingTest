#include <iostream>
#include <vector>

#define f first
#define s second

using namespace std;

int N, P;
vector<vector<int>> field;
vector<vector<pair<int, int>>> result;

void cmp(int r1, int c1, int r2, int c2)
{
    int nowScore = result[r1][c1].f + abs(field[r1][c1]);
    int nowCount = result[r1][c1].s + (field[r1][c1] < 0);
    
    if (nowScore < result[r2][c2].f) 
        return;
    
    if (nowScore == result[r2][c2].f &&
        nowCount <= result[r2][c2].s)
        return;
    
    result[r2][c2] = {nowScore, nowCount};
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N;
    
    field = vector<vector<int>> (N, vector<int>(N));
    result = vector<vector<pair<int, int>>> (N + 1, vector<pair<int, int>>(N + 1, {0, 0}));
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> field[i][j];
    
    cin >> P;
    for (int i = 0, r, c; i < P; i++)
    {
        cin >> r >> c;
        field[r - 1][c - 1] *= -1;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cmp(i, j, i + 1, j);
            cmp(i, j, i, j + 1);
        }
    }
    
    cout << result[N - 1][N - 1].f + field[N - 1][N - 1] << " " 
        << result[N - 1][N - 1].s;
}