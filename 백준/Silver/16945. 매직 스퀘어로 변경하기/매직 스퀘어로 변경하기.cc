#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> field(9);
vector<vector<int>> resultTypes;

void init()
{
    vector<int> nList;
    for (int i = 1; i <= 9; i++)
        nList.push_back(i);
    
    do 
    {
        int sum = nList[0] + nList[1] + nList[2];
        
        if (sum != nList[3] + nList[4] + nList[5]) continue;
        if (sum != nList[6] + nList[7] + nList[8]) continue;
        
        if (sum != nList[0] + nList[3] + nList[6]) continue;
        if (sum != nList[1] + nList[4] + nList[7]) continue;
        if (sum != nList[2] + nList[5] + nList[8]) continue;
        
        if (sum != nList[0] + nList[4] + nList[8]) continue;
        if (sum != nList[2] + nList[4] + nList[6]) continue;
        
        resultTypes.push_back(nList);
    } 
    while (next_permutation(nList.begin(), nList.end()));
}

void input()
{
    for (int i = 0; i < 9; i++)
        cin >> field[i];
}

void solve()
{
    int minCost = 100;
    for (int i = 0; i < resultTypes.size(); i++)
    {
        int nowCost = 0;
        for (int j = 0; j < 9; j++)
        {
            nowCost += abs(field[j] - resultTypes[i][j]);
        }
        
        minCost = min(minCost, nowCost);
    }
    
    cout << minCost;
}

int main()
{
    init();
    input();
    solve();
}