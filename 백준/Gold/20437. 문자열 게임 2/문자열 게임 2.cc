#include <iostream>
#include <vector>

using namespace std;

void simulate()
{
    string s;
    int n, t1 = 10000, t2 = -1;
    
    cin >> s >> n;
    
    vector<vector<int>> aList(26);
    
    for (int i = 0; i < s.length(); i++)
        aList[s[i] - 'a'].push_back(i);
    
    for (int i = 0; i < 26; i++)
    {
        if (aList[i].size() < n) continue;
        
        for (int j = n - 1; j < aList[i].size(); j++)
        {
            int now = aList[i][j] - aList[i][j - n + 1] + 1;
            
            t1 = min(t1, now);
            t2 = max(t2, now);
        }
    }
    
    if (t2 == -1)
        cout << "-1\n";
    else
        cout << t1 << " " << t2 << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}