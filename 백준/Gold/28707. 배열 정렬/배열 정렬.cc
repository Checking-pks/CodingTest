#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int N, M;
string nList, sortedList;
vector<vector<int>> mList;

map<string, int> visit;

void input()
{
	cin >> N;

	for (int i = 0, now; i < N; i++)
	{
	    cin >> now;
	    nList.push_back(now + '0');
	}

	cin >> M;

	mList = vector<vector<int>> (M, vector<int>(3));
	for (int i = 0; i < M; i++)
	{
		cin >> mList[i][0] >> mList[i][1] >> mList[i][2];
	    mList[i][0]--, mList[i][1]--;
	}
}

void simulate()
{
    priority_queue<pair<int, string>> pq;
    
    pq.push({0, nList});
    visit[nList] = 0;
    
    while (pq.size())
    {
        int nowPrice = pq.top().first;
        string nowList = pq.top().second;
        
        pq.pop();
        
        for (int i = 0, a, b, p; i < M; i++)
    	{
    		a = mList[i][0];
    		b = mList[i][1];
    		p = nowPrice - mList[i][2];
    
    		swap(nowList[a], nowList[b]);
    		
    		if (visit.find(sortedList) != visit.end() && visit[sortedList] > p);
    		else if (visit.find(nowList) == visit.end() || visit[nowList] < p)
    		{
    		    pq.push({p, nowList});
    		    visit[nowList] = p;
    		}
    		
    		swap(nowList[a], nowList[b]);
    	}
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	input();
	
	sortedList = nList;
	sort(sortedList.begin(), sortedList.end());
	
	simulate();

    cout << (visit.find(sortedList) != visit.end() ? -visit[sortedList] : -1);
}