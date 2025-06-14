#include <iostream>
#include <vector>

using namespace std;

int R, C, X, Y;
string Q;
vector<string> field;
vector<vector<bool>> light;

void init()
{
    cin >> R >> C;
    
    field.resize(R);
    light.resize(R, vector<bool>(C));
    
    for (int i = 0; i < R; i++)
        cin >> field[i];
}

void lighting(int x, int y, char c)
{
    if (x < 0 || x >= R) return;
    if (y < 0 || y >= C) return;
    
    if (field[x][y] != c) return;
    if (light[x][y]) return;
    
    light[x][y] = true;
    
    lighting(x + 1, y, c);
    lighting(x - 1, y, c);
    lighting(x, y + 1, c);
    lighting(x, y - 1, c);
}

void simulate()
{
    cin >> X >> Y >> Q;
    
    X--, Y--;
    
    for (int i = 0; i < Q.length(); i++)
    {
        if (Q[i] == 'U') X--;
        if (Q[i] == 'D') X++;
        if (Q[i] == 'L') Y--;
        if (Q[i] == 'R') Y++;
        
        if (Q[i] == 'W') lighting(X, Y, field[X][Y]);
    }
}

void output()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << (abs(X - i) + abs(Y - j) < 2 || light[i][j] ? "." : "#");
        
        cout << "\n";
    }
}

int main()
{
    init();
    simulate();
    output();
}