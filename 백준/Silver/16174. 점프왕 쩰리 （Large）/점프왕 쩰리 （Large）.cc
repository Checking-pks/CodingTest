#include <iostream>
#include <vector>

using namespace std;

int N;
bool isGoal = false;
vector<vector<int>> field;

void simulate(int x, int y) {
    if (isGoal) return;
    if (0 > x || x >= N) return;
    if (0 > y || y >= N) return;
    if (!field[x][y]) return;
    
    if (field[x][y] == -1) {
        isGoal = true;
        return;
    }
    
    int move = field[x][y];
    field[x][y] = 0;
    
    simulate(x + move, y);
    simulate(x, y + move);
}

int main()
{
    cin >> N;
    
    field = vector<vector<int>>(N, vector<int>(N));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            cin >> field[i][j];
    
    simulate(0, 0);
    
    cout << (isGoal ? "HaruHaru" : "Hing");
}