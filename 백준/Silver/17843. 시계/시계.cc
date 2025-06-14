#include <iostream>
#include <vector>

using namespace std;

void solve() {
    double h, m, s;
    cin >> h >> m >> s;
    
    m = m * 60 + s;
    h = h * 60 * 60 + m;
    
    vector<double> degree = {
        s * 6,
        m * 6 / 60,
        h * 6 / 60 / 12
    };
    
    double result = 360;
    for (int i=0; i<3; i++) {
        for (int j=i+1; j<3; j++) {
            double s1 = min(degree[i], degree[j]);
            double s2 = max(degree[i], degree[j]);
            
            result = min(result, s2 - s1);
            result = min(result, s1 - s2 + 360);
        }
    }
    
    cout << result << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    cout.precision(10);
    cout.fixed;
    
    while (T--)
        solve();
}