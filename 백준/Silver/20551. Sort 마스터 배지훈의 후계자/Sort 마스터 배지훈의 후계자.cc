#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> nList(N);
    map<int, int> nMap;
    for (int i=0; i<N; i++) 
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    for (int i=0; i<N; i++) {
        if (nMap.find(nList[i]) != nMap.end())
            continue;
            
        nMap[nList[i]] = i;
    }
    
    for (int i=0, now; i<M; i++) {
        cin >> now;
        cout << (nMap.find(now) != nMap.end() ? nMap[now] : -1) << "\n";
    }
}