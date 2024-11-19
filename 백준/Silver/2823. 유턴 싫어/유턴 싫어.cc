#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    
    vector<vector<char>> field(R + 2, vector<char> (C + 2, 'X'));
    for (int i = 1; i <= R; i++)
    {
        string S;
        cin >> S;
        for (int j = 0; j <= C; j++)
            field[i][j + 1] = S[j];
    }
    
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (field[i][j] == 'X')
                continue;
            
            int count = (field[i + 1][j] == 'X') +
                        (field[i - 1][j] == 'X') +
                        (field[i][j + 1] == 'X') +
                        (field[i][j - 1] == 'X');
            
            if (count >= 3)
            {
                cout << 1;
                return 0;
            }
        }
    }
    
    cout << 0;
}