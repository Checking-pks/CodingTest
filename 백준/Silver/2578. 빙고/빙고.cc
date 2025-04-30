#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> f(5, vector<int>(5));

int isBingo(int x, int y)
{
    int row = 0, col = 0;
    
    for (int i = 0; i < 5; i++)
    {
        row += f[x][i];
        col += f[i][y];
    }
    
    return !row + !col;
}

int main()
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> f[i][j];
    
    for (int a = 1, now; a <= 25; a++)
    {
        cin >> now;
        
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                if (now == f[i][j]) 
                    f[i][j] = 0;
        
        int bingo = 0;
        
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                bingo += isBingo(i, j);
        
        bingo /= 5;
        
        bingo += (f[0][0] + f[1][1] + f[2][2] + f[3][3] +  f[4][4] == 0);
        bingo += (f[0][4] + f[1][3] + f[2][2] + f[3][1] +  f[4][0] == 0);
        
        if (bingo >= 3)
        {
            cout << a;
            break;
        }
    }
}