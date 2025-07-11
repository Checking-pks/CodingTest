#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;
    
    vector<vector<int>> child(N + 1);
    vector<int> parentCount(N + 1);
    
    for (int i = 0, A, B; i < M; i++)
    {
        cin >> A >> B;
        
        child[A].push_back(B);
        parentCount[B]++;
    }
    
    priority_queue<int> bucket;
    for (int i = 1; i <= N; i++)
        if (!parentCount[i])
            bucket.push(-i);
    
    while (bucket.size())
    {
        int now = -bucket.top();
        bucket.pop();
        
        cout << now << " ";
        
        for (int i = 0, c; i < child[now].size(); i++)
        {
            c = child[now][i];
            parentCount[c]--;
            
            if (!parentCount[c])
                bucket.push(-c);
        }
    }
}