#include <iostream>
#include <vector>

using namespace std;

int N, K;

vector<vector<int>> moveList = {
    {1, 0}, {0, 1}, {-1, 0}, {0, -1}
};

void simulate()
{
    int num = N * N, moveIdx = 0;
    int nowX = 1, nowY = 1;
    int targetX, targetY;
    
    vector<vector<int>> field(N + 2, vector<int> (N + 2));
    
    for (int i = 1; i <= N; i++)
    {
        field[i][0] = -1;
        field[0][i] = -1;
        field[i][N + 1] = -1;
        field[N + 1][i] = -1;
    }
    
    while (num)
    {
        if (num == K)
        {
            targetX = nowX;
            targetY = nowY;
        }
        
        field[nowX][nowY] = num;
        
        int nextX = nowX + moveList[moveIdx][0];
        int nextY = nowY + moveList[moveIdx][1];
        
        if (field[nextX][nextY])
            moveIdx = (moveIdx + 1) % 4;
        
        nowX += moveList[moveIdx][0];
        nowY += moveList[moveIdx][1];
        
        num--;
    }
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            cout << field[i][j] << " ";
        cout << "\n";
    }
    
    cout << targetX << " " << targetY;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N >> K;
    
    simulate();
}