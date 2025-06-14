#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field(21, vector<int>(21));

bool isLine(int num, int x, int y, int dx, int dy)
{
    if (field[x - dx][y - dy] == num) return false;
    if (dx < 0 && x < 5) return false;
    if (dx > 0 && x > 15) return false;
    if (dy && y > 15) return false;
    
    for (int i = 1; i < 5; i++)
        if (field[x + dx * i][y + dy * i] != num)
            return false;
    
    return (field[x + dx * 5][y + dy * 5] != num);
}

int main()
{
    for (int i = 1; i < 20; i++)
        for (int j = 1; j < 20; j++)
            cin >> field[i][j];
    
    for (int j = 1; j < 20; j++)
    {
        for (int i = 1; i < 20; i++)
        {
            if (!field[i][j]) continue;
            if (isLine(field[i][j], i, j, 0, 1) ||
                isLine(field[i][j], i, j, 1, 0) ||
                isLine(field[i][j], i, j, 1, 1) ||
                isLine(field[i][j], i, j, -1, 1))
            {
                cout << field[i][j] << "\n" << i << " " << j;
                return 0;
            }
        }
    }
    
    cout << 0;
}