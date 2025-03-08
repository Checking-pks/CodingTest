#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll N, K, DIV = 1000000000;
    cin >> N >> K;
    
    vector<vector<int>> nList(K, vector<int>(N + 1, 1));
    
    for (ll i = 1; i < K; i++)
        for (ll j = 1; j <= N; j++)
            nList[i][j] = (nList[i - 1][j] + nList[i][j - 1]) % DIV;
    
    cout << nList.back().back();
}