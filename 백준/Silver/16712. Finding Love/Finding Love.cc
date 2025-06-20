#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<int> nList(N), mList(M);
    for (int i = 0; i < N; i++)
    {
        cin >> nList[i];
        
        if (i < M) mList[i] = nList[i];
    }
    
    nList.push_back(-1);
    sort(mList.begin(), mList.end());
    
    for (int i = M, now; i <= N; i++)
    {
        cin >> now;
        mList[now - 1] = nList[i];
        
        sort(mList.begin(), mList.end());
    }
    
    for (int i = 1; i < M; i++)
        cout << mList[i] << " ";
}