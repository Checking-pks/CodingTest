#include <iostream>
#include <vector>

using namespace std;

int R, C, X;
vector<vector<bool>> field, visit;

void input()
{
    cin >> R >> C;
    
    field = visit = vector<vector<bool>> (R, vector<bool> (C));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0, now; j < C; j++)
        {
            cin >> now;
            field[i][j] = now;
        }
    }
    
    cin >> X;
}

void simulate(int r, int c)
{
    if (r < 0 || r >= R) return;
    if (c < 0 || c >= C) return;
    
    if (field[r][c] != field.back().back()) return;
    if (visit[r][c]) return;
    if (visit.back().back()) return;
    
    visit[r][c] = true;
    
    
    for (int i = 0; i <= X; i++)
    {
        for (int j = 0; j <= X - i; j++)
        {
            simulate(r + i, c + j);
            simulate(r + i, c - j);
            simulate(r - i, c + j);
            simulate(r - i, c - j);
        }
    }
}

int main()
{
    input();
    
    simulate(0, 0);
    
    cout << (visit.back().back() ? "ALIVE" : "DEAD");
}