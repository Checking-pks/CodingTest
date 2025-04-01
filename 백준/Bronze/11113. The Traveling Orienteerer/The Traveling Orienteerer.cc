#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n, m, p;
    cin >> n;
    
    vector<pair<double, double>> track(n);
    
    for (int i = 0; i < n; i++)
        cin >> track[i].first >> track[i].second;
    
    cin >> m;
    
    for (int i = 0; i < m; i++)
    {
        double dist = 0, last;
        
        cin >> p >> last;
        
        for (int j = 1; j < p; j++)
        {
            double now;
            cin >> now;
            
            dist += sqrt(
                    (track[last].first - track[now].first) * (track[last].first - track[now].first) +
                    (track[last].second - track[now].second) * (track[last].second - track[now].second)
                );
            
            last = now;
        }
        
        cout << int(dist + 0.5) << "\n";
    }
}