#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<string> field;
vector<vector<vector<int>>> moveField;

int ballX = -1, ballY;
int gravityIdx = 0;
vector<vector<int>> gravity = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int playGravity(int x, int y, int idx)
{
    int newX = x + gravity[idx][0];
    int newY = y + gravity[idx][1];
    
    if (newX < 0 || newX >= N) return 0;
    if (newY < 0 || newY >= N) return 0;
    if (field[newX][newY] == 'X') return 0;
    if (moveField[idx][x][y])
        return moveField[idx][x][y];
    
    return moveField[idx][x][y] = (playGravity(newX, newY, idx) + 1);
}

void initMoveField()
{
    moveField = vector<vector<vector<int>>> (4, vector<vector<int>> (N, vector<int> (N)));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (field[i][j] == 'X') continue;
            
            for (int k = 0; k < 4; k++)
            {
                if (moveField[k][i][j]) continue;
                playGravity(i, j, k);
            }
        }
    }
}

void moveBall()
{
    if (!moveField[gravityIdx][ballX][ballY])
        return;
    
    int newX = ballX + gravity[gravityIdx][0] * moveField[gravityIdx][ballX][ballY];
    int newY = ballY + gravity[gravityIdx][1] * moveField[gravityIdx][ballX][ballY];
    
    field[ballX][ballY] = '.';
    field[newX][newY] = 'L';
    
    ballX = newX;
    ballY = newY;
}

void output()
{
    if (gravityIdx == 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << field[i][j];
            cout << "\n";
        }
    }
    if (gravityIdx == 1)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = N - 1; i >= 0; i--)
                cout << field[i][j];
            cout << "\n";
        }
    }
    if (gravityIdx == 2)
    {
        for (int i = N - 1; i >= 0; i--)
        {
            for (int j = N - 1; j >= 0; j--)
                cout << field[i][j];
            cout << "\n";
        }
    }
    if (gravityIdx == 3)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            for (int i = 0; i < N; i++)
                cout << field[i][j];
            cout << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N >> K;
    
    field.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> field[i];
        for (int j = 0; ballX < 0 && j < N; j++)
            if (field[i][j] == 'L')
                ballX = i, ballY = j;
    }
    
    initMoveField();
    
    moveBall();
    
    for (int i = 0; i < K; i++)
    {
        string rotation;
        cin >> rotation;
        
        gravityIdx += (rotation == "L" ? 3 : 1);
        gravityIdx %= 4;
        
        moveBall();
    }
    
    output();
}