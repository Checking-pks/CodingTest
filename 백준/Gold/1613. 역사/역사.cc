#include <iostream>
#include <vector>

using namespace std;

int n, k, s;
vector<vector<bool>> incident;

void check(int a, int b) {
    if (a == b) return;
    if (incident[a][b]) return;
        
    incident[a][b] = true;
    
    for (int i=1; i<=n; i++) {
        if (incident[i][a]) check(i, b);
        if (incident[b][i]) check(a, i);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> k;

    incident = vector<vector<bool>>(n + 1, vector<bool>(n + 1));
    
    for (int i=0, a, b; i<k; i++) {
        cin >> a >> b;
        
        if (incident[a][b])
            continue;
            
        check(a, b);
    }
    
    cin >> s;
    for (int i=0, a, b; i<s; i++) {
        cin >> a >> b;
        
        if (incident[a][b]) 
            cout << "-1\n";
        else if (incident[b][a])
            cout << "1\n";
        else
            cout << "0\n";
    }
}