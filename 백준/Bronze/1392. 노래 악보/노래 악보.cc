#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, Q;
    cin >> N >> Q;
    
    vector<int> nList;
    for (int i=1, now; i<=N; i++)
    {
        cin >> now;
        for (int j=0; j<now; j++)
            nList.push_back(i);
    }
    
    for (int i=0, now; i<Q; i++)
    {
        cin >> now;
        cout << nList[now] << "\n";
    }
}