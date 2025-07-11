#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll N, M, K;
vector<ll> needStoneNumToBridge;
vector<pair<ll, ll>> construction;

void input()
{
    cin >> N >> M >> K;
    
    needStoneNumToBridge.resize(N + 1);
    construction.resize(M);
    
    for (ll i = 1; i <= N; i++)
        cin >> needStoneNumToBridge[i];
    
    for (ll i = 0; i < M; i++)
        cin >> construction[i].first >> construction[i].second;
}

bool simulate()
{
    if (M <= 1) return true;
    
    sort(construction.begin(), construction.end());
    
    ll needStoneNum = 0;
    for (ll i = 1; i < M; i++)
    {
        ll startPos = construction[i - 1].second;
        ll endPos = construction[i].first;
        
        ll nowNeedStone = needStoneNumToBridge[startPos];
        for (; startPos <= endPos; startPos++)
            nowNeedStone = min(nowNeedStone, needStoneNumToBridge[startPos]);
        
        needStoneNum += nowNeedStone;
    }
    
    ll startPos = construction.back().second;
    ll endPos = construction.front().first;
    ll nowNeedStone = needStoneNumToBridge[endPos];
    
    for (; endPos > 0; endPos--)
        nowNeedStone = min(nowNeedStone, needStoneNumToBridge[endPos]);
    
    if (construction.back().second != 1)
        for (; startPos <= N; startPos++)
            nowNeedStone = min(nowNeedStone, needStoneNumToBridge[startPos]);
    
    needStoneNum += nowNeedStone;
    
    return (needStoneNum <= K);
}

int main()
{
    input();
    cout << (simulate() ? "YES" : "NO");
}