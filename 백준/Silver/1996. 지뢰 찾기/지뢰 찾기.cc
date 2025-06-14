#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> near = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int main()
{
    int N;
    cin >> N;
    
    vector<vector<int>> field(N + 2, vector<int>(N + 2));
    for (int i = 1; i <= N; i++)
    {
        string line;
        cin >> line;
        
        for (int j = 0; j < N; j++)
        {
            if (line[j] == '.') continue;
            field[i][j + 1] = line[j] - '0';
        }
    }
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (field[i][j] > 0)
            {
                cout << "*";
                continue;
            }
            
            int now = 0;
            
            for (int k = 0, x, y; k < near.size(); k++)
            {
                x = i + near[k].first;
                y = j + near[k].second;
                
                now += field[x][y];
            }
            
            if (now > 9)
                cout << 'M';
            else
                cout << now;
        }
        
        cout << "\n";
    }
}