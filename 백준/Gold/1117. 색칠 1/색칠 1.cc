#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll W, H, f, c, x1, y1, x2, y2;
vector<vector<ll>> areaList;

void process1()
{
    if (f * 2 < W)
        areaList = {{0, 0, f, H, 2}, {f, 0, W - f, H, 1}};
    else if (f * 2 == W)
        areaList = {{0, 0, f, H, 2}};
    else if (f * 2 > W && f < W)
        areaList = {{0, 0, W - f, H, 2}, {W - f, 0, f, H, 1}};
    else if (f == W)
        areaList = {{0, 0, W, H, 1}};
}

void process2()
{
    vector<vector<ll>> areaResult;
    ll t = H / (c + 1);    
    
    for (ll i = 0, m_x1, m_x2, m_v; i < areaList.size(); i++)
    {
        m_x1 = areaList[i][0];
        m_x2 = areaList[i][2];
        m_v  = areaList[i][4] * (c + 1);
        
        areaResult.push_back({m_x1, 0, m_x2, t, m_v});
    }
    
    areaList = areaResult;
}

void process3()
{
    ll result = W * H;
    
    for (ll i = 0, nowX1, nowY1, nowX2, nowY2; i < areaList.size(); i++)
    {
        nowX1 = max(areaList[i][0], x1);
        nowY1 = max(areaList[i][1], y1);
        nowX2 = min(areaList[i][2], x2);
        nowY2 = min(areaList[i][3], y2);
        
        if (nowX1 >= nowX2 || nowY1 >= nowY2) continue;
        
        result -= (nowX2 - nowX1) * (nowY2 - nowY1) * areaList[i][4];
    }
    
    cout << result;
}

int main()
{
    cin >> W >> H >> f >> c >> x1 >> y1 >> x2 >> y2;
    
    process1();
    process2();
    process3();
}