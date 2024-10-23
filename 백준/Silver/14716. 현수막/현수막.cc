#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field;
vector<vector<int>> moveList = {
    {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, 
    {0, 1}, {1, -1}, {1, 0}, {1, 1}
};

void marking(int x, int y) {
    if (!field[x][y])
        return;
    
    field[x][y] = 0;
    
    for (int i=0; i<moveList.size(); i++)
        marking(x + moveList[i][0], y + moveList[i][1]);
}

int main()
{
    int M, N, result = 0;
    cin >> M >> N;
    
    field = vector<vector<int>>(M + 2, vector<int> (N + 2));
    for (int i=1; i<=M; i++)
        for (int j=1; j<=N; j++)
            cin >> field[i][j];
    
    for (int i=1; i<=M; i++) {
        for (int j=1; j<=N; j++) {
            if (!field[i][j])
                continue;
            
            result++;
            marking(i, j);
        }
    }
    
    cout << result;
}