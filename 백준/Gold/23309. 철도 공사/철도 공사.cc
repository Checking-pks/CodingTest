#include <iostream>
#include <list>
#include <unordered_map>
#include <iterator>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    list<int> nList;
    unordered_map<int, list<int>::iterator> idx;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        nList.push_back(now);
        idx[now] = prev(nList.end());
    }
    
    for (int i = 0, a, b; i < M; i++)
    {
        string type;
        cin >> type;
        
        if (type == "BN")
        {
            cin >> a >> b;
            
            auto now = next(idx[a]);
            
            if (now == nList.end())
                now = next(now);
            
            cout << *now;
            nList.insert(now, b);
            idx[b] = prev(now);
        }
        
        if (type == "BP")
        {
            cin >> a >> b;
            
            auto now = idx[a];
            
            cout << *(prev(now == nList.begin() ? nList.end() : now));
            nList.insert(now, b);
            idx[b] = prev(now);
        }
        
        if (type == "CN")
        {
            cin >> a;
            
            auto now = next(idx[a]);
            
            if (now == nList.end())
                now = next(now);
            
            cout << *(now);
            nList.erase(now);
        }
        
        if (type == "CP")
        {
            cin >> a;
            
            auto now = prev(idx[a] == nList.begin() ? nList.end() : idx[a]);
            
            cout << *(now);
            nList.erase(now);
        }
        
        cout << "\n";
    }
}