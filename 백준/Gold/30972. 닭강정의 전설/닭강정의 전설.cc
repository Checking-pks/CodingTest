#include <iostream>
#include <vector>

using namespace std;

int N, Q;
vector<vector<int>> field;

int getRange(int a1, int b1, int a2, int b2)
{
    return field[a2][b2] - field[a1 - 1][b2] - field[a2][b1 - 1] + field[a1 - 1][b1 - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N;
    
    field = vector<vector<int>> (N + 1, vector<int>(N + 1));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> field[i][j];
            field[i][j] += field[i - 1][j] + field[i][j - 1] - field[i - 1][j - 1];
        }
    }
    
    cin >> Q;
    for (int i = 0, r1, c1, r2, c2; i < Q; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        cout << getRange(r1 + 1, c1 + 1, r2 - 1, c2 - 1) * 2 - getRange(r1, c1, r2, c2) << "\n";
    }
}