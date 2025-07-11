#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int R, C;
vector<vector<int>> field;
vector<vector<int>> moveList = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int dist = 0, num = 0;

void input()
{
    cin >> R >> C;
    field = vector<vector<int>>(R, vector<int>(C));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> field[i][j];
}

void simulate(int r, int c)
{
    if (!field[r][c]) return;
    
    vector<vector<bool>> visit = vector<vector<bool>>(R, vector<bool>(C));
    queue<vector<int>> bucket;
    
    visit[r][c] = true;
    bucket.push({r, c, 0});
    
    while (bucket.size())
    {
        int nowR = bucket.front()[0];
        int nowC = bucket.front()[1];
        int nowDist = bucket.front()[2];
        
        bucket.pop();
        
        if (nowDist > dist)
        {
            dist = nowDist;
            num = field[nowR][nowC] + field[r][c];
        }
        else if (nowDist == dist)
        {
            num = max(num, field[nowR][nowC] + field[r][c]);
        }
        
        for (int i = 0; i < moveList.size(); i++)
        {
            int nextR = nowR + moveList[i][0];
            int nextC = nowC + moveList[i][1];
            
            if (nextR < 0 || nextR >= R) continue;
            if (nextC < 0 || nextC >= C) continue;
            if (!field[nextR][nextC]) continue;
            if (visit[nextR][nextC]) continue;
            
            visit[nextR][nextC] = true;
            bucket.push({nextR, nextC, nowDist + 1});
        }
    }
}

int main()
{
    input();
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            simulate(i, j);
    
    cout << num;
}