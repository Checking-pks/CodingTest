#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, front;
vector<int> nList1, nList2;
vector<bool> isPrime;

vector<vector<int>> edges;
vector<int> match;
vector<bool> visit;

void init()
{
    cin >> N >> front;
    
    for (int i = 1, now; i < N; i++)
    {
        cin >> now;
        (now & 1 ? nList1 : nList2).push_back(now);
    }
}

void initSieve()
{
    isPrime = vector<bool>(2001, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= 2000; i++)
    {
        if (!isPrime[i]) continue;
        
        for (int j = i * i; j <= 2000; j += i)
            isPrime[j] = false;
    }
}

bool dfs(int node)
{
    if (visit[node]) return false;
    
    visit[node] = true;
    
    for (int edge : edges[node])
    {
        if (match[edge] == -1 || dfs(match[edge]))
        {
            match[edge] = node;
            return true;
        }
    }
    
    return false;
}

bool calc()
{
    edges = vector<vector<int>>(nList1.size());
    
    for (int i = 0; i < nList1.size(); i++)
        for (int j = 0; j < nList2.size(); j++)
            if (isPrime[nList1[i] + nList2[j]])
                edges[i].push_back(j);
    
    int maxMatching = 0;
    match = vector<int>(nList2.size(), -1);
    for (int i = 0; i < nList1.size(); i++)
    {
        visit = vector<bool>(nList1.size());
        if (dfs(i)) maxMatching++;
    }
    
    return maxMatching == nList1.size();
}

void simulate()
{
    if (nList2.size() < nList1.size()) swap(nList1, nList2);
    
    if (nList1.size() + 1 != nList2.size())
    {
        cout << -1;
        return;
    }
    
    vector<int> resultList;
    for (int i = 0; i < nList2.size(); i++)
    {
        if (!isPrime[front + nList2[i]]) continue;
        
        int nowPrime = nList2[i];
        nList2[i] = (front & 1) + 2;
        
        bool nowCalc = calc();
        
        if (nowCalc) resultList.push_back(nowPrime);
        nList2[i] = nowPrime;
    }
    
    if (resultList.empty())
    {
        cout << -1;
        return;
    }
    
    sort(resultList.begin(), resultList.end());
    
    for (int i = 0; i < resultList.size(); i++)
        cout << resultList[i] << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    init();
    initSieve();
    
    simulate();
}