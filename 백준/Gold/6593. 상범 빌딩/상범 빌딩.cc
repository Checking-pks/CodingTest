#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int L, R, C;
vector<vector<vector<bool>>> field;

vector<int> sPos, ePos;
int escapeTime = 0;

vector<vector<int>> movePos = {
    {1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}
};

void init()
{
    sPos = ePos = {0, 0, 0};
    escapeTime = 0;
    
    field = vector<vector<vector<bool>>>(L, 
                    vector<vector<bool>>(R, 
                            vector<bool>(C)));
    
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < R; j++)
        {
            string s;
            cin >> s;
            
            for (int k = 0; k < C; k++)
            {
                if (s[k] == '#') continue;
                
                field[i][j][k] = true;
                
                if (s[k] == 'S') sPos = {i, j, k};
                if (s[k] == 'E') ePos = {i, j, k};
            }
        }
    }
}

void simulate()
{
    queue<vector<int>> bucket;
    
    bucket.push({sPos[0], sPos[1], sPos[2], 0});
    
    while (bucket.size())
    {
        int l = bucket.front()[0];
        int r = bucket.front()[1];
        int c = bucket.front()[2];
        int t = bucket.front()[3];
        
        bucket.pop();
        
        if (ePos[0] == l && ePos[1] == r && ePos[2] == c)
        {
            escapeTime = t;
            return;
        }
        
        for (int i = 0; i < movePos.size(); i++)
        {
            int nextL = l + movePos[i][0];
            int nextR = r + movePos[i][1];
            int nextC = c + movePos[i][2];
            
            if (nextL < 0 || nextL >= L) continue;
            if (nextR < 0 || nextR >= R) continue;
            if (nextC < 0 || nextC >= C) continue;
            
            if (!field[nextL][nextR][nextC]) continue;
            
            bucket.push({nextL, nextR, nextC, t + 1});
            field[nextL][nextR][nextC] = false;
        }
    }
}

int main()
{
    cin >> L >> R >> C;
    
    while (L || R || C)
    {
        init();
        
        simulate();
        
        if (escapeTime)
            cout << "Escaped in " << escapeTime << " minute(s).\n";
        else
            cout << "Trapped!\n";
        
        cin >> L >> R >> C;
    }
}