#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int n, k, result = 0;
vector<unordered_set<int>> checkList;
vector<int> scoreList(k);

void check(vector<vector<int>> &field, int r, int c, int idx)
{
    for (int a = 0; a < 2; a++)
    {
        for (int i = 1, nowR, nowC; true; i++)
    	{
    		nowR = r - i;
    		nowC = c + (a ? i : -i);
    
    		if (nowR < 0 || (a ? (nowC >= n) : (nowC < 0))) break;
    		if (field[nowR][nowC] < 0) continue;
    
    		int nowIdx = field[nowR][nowC];
    
    		checkList[idx].insert(nowIdx);
    		checkList[nowIdx].insert(idx);
    	}
    }
}

void init()
{
    cin >> n;

    vector<vector<int>> field(n, vector<int>(n, -1));
	for  (int i = 0, now; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> now;
			if (!now) continue;

			field[i][j] = checkList.size();
			checkList.push_back({});

			check(field, i, j, field[i][j]);
		}
	}
	
	k = checkList.size();
}

bool cmp(int a, int b)
{
    if (checkList[a].size() != checkList[b].size())
        return checkList[a].size() > checkList[b].size();
    return scoreList[a] < scoreList[b];
}

void simulate()
{
    vector<bool> visit(k);
    vector<int> sortList(k);
    
    scoreList = vector<int>(k);
    
    for (int i = 0; i < k; i++)
        for (int j : checkList[i])
            scoreList[i] += checkList[j].size();
    
    for (int i = 0; i < k; i++)
        sortList[i] = i;
    
    while (sortList.size())
    {
        sort(sortList.begin(), sortList.end(), cmp);
	    
	    int now = sortList.back();
	    sortList.pop_back();
	    
	    if (visit[now]) continue;
	    visit[now] = true;
	    
	    result++;
	    
	    for (int a : checkList[now])
	    {
	        visit[a] = true;
	        
	        for (int b : checkList[a])
	        {
	            if (visit[b]) continue;
	            if (checkList[b].find(a) != checkList[b].end())
	            {
	                checkList[b].erase(a);
	                scoreList[b] -= checkList[a].size();
	            }
	        }
	    }
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