#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> dp = {1, 3};
    for (int i = 2; i <= N; i++)
        dp.push_back((dp[i - 1] * 2 + dp[i - 2]) % 9901);
    
    cout << dp[N];
}