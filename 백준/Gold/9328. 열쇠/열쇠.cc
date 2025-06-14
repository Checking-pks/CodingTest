#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int R, C, key = 0, score = 0;
queue<vector<int>> doorList;

vector<string> field;

void init()
{
    cin >> R >> C;
    
    field = vector<string>(R);
    doorList = queue<vector<int>>();
    
    for (int i = 0; i < R; i++)
        cin >> field[i];
    
    key = 0, score = 0;
    string keyStr;
    cin >> keyStr;
    
    if (keyStr == "0") 
        return;
    
    for (int i = 0; i < keyStr.length(); i++)
        key |= (1 << (keyStr[i] - 'a'));
}

void looting(int r, int c)
{
    if (r < 0 || r >= R) return;
    if (c < 0 || c >= C) return;
    
    char obj = field[r][c];
    
    if (obj == '*') return;
    if (obj == '$') score++;
    if (obj >= 'a' && obj <= 'z')
        key |= (1 << (obj - 'a'));
    
    if (obj >= 'A' && obj <= 'Z')
    {
        if (!(key & (1 << (obj - 'A'))))
        {
            doorList.push({r, c, key});
            return;
        }
    }
    
    field[r][c] = '*';
    
    looting(r + 1, c);
    looting(r - 1, c);
    looting(r, c + 1);
    looting(r, c - 1);
}

void simulate()
{
    init();
    
    // 1차 루팅
    for (int i = 0; i < R; i++)
    {
        if (field[i][0] != '*')
            looting(i, 0);
        
        if (field[i][C - 1] != '*')
            looting(i, C - 1);
    }
    
    for (int i = 0; i < C; i++)
    {
        if (field[0][i] != '*')
            looting(0, i);
        
        if (field[R - 1][i] != '*')
            looting(R - 1, i);
    }
    
    // 2차 루팅
    while (doorList.size())
    {
        vector<int> now = doorList.front();
        int nowR = now[0], nowC = now[1];
        int nowKeyInfo = now[2];
        char nowObj = field[nowR][nowC];
        
        doorList.pop();
        
        if (nowObj == '*') 
            continue;
        
        if (!(key & (1 << (nowObj - 'A'))))
        {
            if (key == nowKeyInfo) 
                break;
            
            now[2] = key;
            doorList.push(now);
            continue;
        }
        
        looting(nowR, nowC);
    }
    
    cout << score << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        simulate();
    }
}