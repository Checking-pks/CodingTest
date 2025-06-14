#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

#define DIV 1000000000;

int N, M;
vector<vector<int>> mulList;

void mul(int idx, int input)
{
    ll now;
    int i, j, rest;
    int size = mulList[idx].size();
    
    if (!input)
    {
        mulList[idx] = {0};
        return;
    }
    
    if (size == 1 && mulList[idx][0] == 0) 
        return;
    
    vector<int> result(size * 2);
    
    for (i = 0; i < size; i++)
    {
        now = 1l * mulList[idx][i] * input;
        
        for (j = 0; now; j++)
        {
            rest = now % DIV;
            
            result[i + j] += rest;
            now /= DIV;
        }
    }
    
    for (i = 0; i < result.size() - 1; i++)
    {
        result[i + 1] += result[i] / DIV;
        result[i] %= DIV;
    }
    
    while (result.size() && result.back() == 0)
        result.pop_back();
    
    if (result.empty())
        result = {0};
    
    mulList[idx] = result;
}

bool compare(int a, int b)
{
    bool aIsMinus = mulList[a].back() < 0;
    bool bIsMinus = mulList[b].back() < 0;
    
    int aSize = mulList[a].size();
    int bSize = mulList[b].size();
    
    if (aIsMinus != bIsMinus)
        return aIsMinus;
    
    if (aSize != bSize)
        return (aSize > bSize && aIsMinus) || (aSize < bSize && !aIsMinus);
    
    for (int i = aSize - 1; i >= 0; i--)
    {
        if (mulList[a][i] == mulList[b][i]) continue;
        
        return mulList[a][i] < mulList[b][i];
    }
    
    return true;
}

int getResult()
{
    int idx = 0;
    
    for (int i = 1; i < M; i++)
        if (compare(idx, i))
            idx = i;
    
    return idx + 1;
}

void simulate()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> M >> N;
    
    mulList = vector<vector<int>> (M, {1});
    
    int i, j, now;
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> now;
            mul(j, now);
        }
    }
    
    cout << getResult() << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}