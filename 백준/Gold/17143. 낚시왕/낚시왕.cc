#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int R, C, M, result = 0;

vector<int> moveR, moveC;
vector<vector<int>> field, shark;

int getMoveIdx(int r, int c, int d)
{
    if (d < 3)
    {
        if (r == 0) return 0;
        if (d == 2) return r;
        return moveR.size() - r;
    }
    else
    {
        if (c == 0) return 0;
        if (d == 3) return c;
        return moveC.size() - c;
    }
}

bool cmp(vector<int> a, vector<int> b)
{
    return a.back() > b.back();
}

void init()
{
    cin >> R >> C >> M;
    
    for (int i = 0; i < R; i++) moveR.push_back(i);
    for (int i = 0; i < C; i++) moveC.push_back(i);
    
    for (int i = R - 2; i > 0; i--) moveR.push_back(i);
    for (int i = C - 2; i > 0; i--) moveC.push_back(i);
    
    field = vector<vector<int>>(R, vector<int>(C));
    shark = vector<vector<int>>(M + 1, {10001});
    
    for (int i = 1, r, c, s, d, z; i <= M; i++)
    {
        cin >> r >> c >> s >> d >> z;
        shark[i] = {--r, --c, getMoveIdx(r, c, d), (d < 3), s, z};
    }
    
    sort(shark.begin(), shark.end(), cmp);
    
    for (int i = 1; i <= M; i++)
        field[shark[i][0]][shark[i][1]] = i;
}

void simulate()
{
    for (int i = 0; i < C; i++)
    {
        for (int j = 0, sharkIdx; j < R; j++)
        {
            sharkIdx = field[j][i];
            
            if (!sharkIdx) continue;
            
            result += shark[sharkIdx][5];
            shark[sharkIdx][5] = -1;
            field[j][i] = 0;
            
            break;
        }
        
        vector<vector<int>> newField = vector<vector<int>>(R, vector<int>(C));
        
        for (int j = 1; j <= M; j++)
        {
            if (shark[j][5] == -1)
                continue;
            
            shark[j][2] += shark[j][4];
            
            if (shark[j][3])
            {
                shark[j][2] %= moveR.size();
                shark[j][0] = moveR[shark[j][2]];
            }
            else
            {
                shark[j][2] %= moveC.size();
                shark[j][1] = moveC[shark[j][2]];
            }
            
            if (newField[shark[j][0]][shark[j][1]])
                shark[j][5] = -1;
            else
                newField[shark[j][0]][shark[j][1]] = j;
        }
        
        field = newField;
    }
}

int main()
{
    init();
    simulate();
    
    cout << result;
}