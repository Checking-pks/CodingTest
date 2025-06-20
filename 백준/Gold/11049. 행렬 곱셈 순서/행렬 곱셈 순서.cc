#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> nList;

void input()
{
    cin >> N;
    
    nList.resize(N, vector<int>(2));
    for (int i = 0; i < N; i++)
        cin >> nList[i][0] >> nList[i][1];
}

void calc()
{
    vector<vector<int>> dp(N, vector<int>(N));
    for (int len = 1; len < N; len++)
    {
        for (int i = 0; i + len < N; i++)
        {
            int j = i + len;
            for (int k = i + 1; k <= j; k++)
            {
                int now = dp[i][k - 1] + dp[k][j] + nList[i][0] * nList[k][0] * nList[j][1];
                
                if (!dp[i][j]) dp[i][j] = now;
                dp[i][j] = min(dp[i][j], now);
            }
        }
    }
    
    cout << dp[0][N - 1];
}

int main()
{
    input();
    calc();
}