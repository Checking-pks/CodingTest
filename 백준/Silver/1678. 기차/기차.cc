#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, M, N;
    cin >> T >> M >> N;
    
    vector<pair<int, string>> trail;
    for (int i = 0, now; i < T; i++)
    {
        string S;
        cin >> S;
        
        cin >> now;
        
        while (now != -1)
        {
            trail.push_back({now, S});
            
            cin >> now;
        }
    }
    
    sort(trail.begin(), trail.end());
    
    for (int i = 0; i < trail.size(); i++)
        N += (M > trail[i].first);
    
    cout << trail[(N - 1) % trail.size()].second;
}