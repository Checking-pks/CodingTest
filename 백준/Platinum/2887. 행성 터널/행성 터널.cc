#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, result = 0;
vector<int> groupNum;
priority_queue<vector<int>> pq;

void init()
{
    cin >> N;
    
    vector<pair<int, int>> xList(N), yList(N), zList(N);
    for (int i = 0; i < N; i++)
    {
        cin >> xList[i].first >> yList[i].first >> zList[i].first;
        xList[i].second = yList[i].second = zList[i].second = i;
    }
    
    sort(xList.begin(), xList.end());
    sort(yList.begin(), yList.end());
    sort(zList.begin(), zList.end());
    
    for (int i = 0; i < N - 1; i++)
    {
        pq.push({-abs(xList[i].first - xList[i + 1].first), xList[i].second, xList[i + 1].second});
        pq.push({-abs(yList[i].first - yList[i + 1].first), yList[i].second, yList[i + 1].second});
        pq.push({-abs(zList[i].first - zList[i + 1].first), zList[i].second, zList[i + 1].second});
    }
}

int groupFind(int a)
{
    return (groupNum[a] == a ? a : groupNum[a] = groupFind(groupNum[a]));
}

bool groupUnion(int a, int b)
{
    int groupA = groupFind(a);
    int groupB = groupFind(b);
    
    if (groupA == groupB) return false;
    
    groupNum[groupB] = groupA;
    return true;
}

void simulate()
{
    groupNum = vector<int>(N);
    for (int i = 1; i < N; i++)
        groupNum[i] = i;
    
    while (pq.size())
    {
        int price = -pq.top()[0];
        int a = pq.top()[1];
        int b = pq.top()[2];
        
        pq.pop();
        
        if (groupUnion(a, b))
            result += price;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    init();
	simulate();

	cout << result;
}