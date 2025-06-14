#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int N, K;
vector<vector<ll>> gameList;

void init()
{
    cin >> N >> K;
    gameList = vector<vector<ll>>(N, vector<ll>(3));
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            cin >> gameList[i][j];
}

bool cmp(vector<ll> a, vector<ll> b)
{
    ll costA = a[2] * b[1], costB = a[1] * b[2];
    
    if (costA != costB)
        return costA > costB;
    
    if (a[1] != b[1])
        return a[1] < b[1];
    
    return a[0] < b[0];
}

void sorting()
{
    sort(gameList.begin(), gameList.end(), cmp);
}

void output()
{
    for (int i = 0; i < K; i++)
        cout << gameList[i][0] << "\n";
}

int main()
{
    init();
    sorting();
    output();
}