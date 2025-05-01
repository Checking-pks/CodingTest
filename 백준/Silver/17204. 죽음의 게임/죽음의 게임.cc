#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    for (int i = 0, now = 0, next; true; i++)
    {
        if (now == K)
        {
            cout << i;
            return 0;
        }
        
        next = nList[now];
        if (next == -1) break;
        nList[now] = -1;
        now = next;
    }
    
    cout << -1;
}