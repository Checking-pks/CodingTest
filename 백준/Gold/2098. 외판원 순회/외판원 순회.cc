#include <iostream>
#include <vector>

using namespace std;

int N, allVisit, inf = 100000000;
vector<vector<int>> field;
vector<vector<int>> dp;

void init()
{
    cin >> N;
    
    allVisit = (1 << N) - 1;
    field = vector<vector<int>>(N, vector<int>(N));
    dp = vector<vector<int>>(N, vector<int>(1 << N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> field[i][j];
}

int simulate(int pos, int visit)
{
    if (visit == (1 << N) - 1)
    {
        if (field[pos][0] > 0)
            return field[pos][0];
        else
            return inf;
    }
    
    if (dp[pos][visit] > 0)
        return dp[pos][visit];
    
    dp[pos][visit] = inf;
    for (int i = 0; i < N; i++)
    {
        if (field[pos][i] == 0 || (visit & (1 << i)))
            continue;
        
        dp[pos][visit] = min(dp[pos][visit], simulate(i, visit | (1 << i)) + field[pos][i]);
    }
    
    return dp[pos][visit];
}

int main()
{
    init();
    
    cout << simulate(0, 1);
}