#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if (a[1] != b[1]) return a[1] > b[1];
    return a[0] < b[0];
}

void simulate()
{
    int n, c, l;
    cin >> n >> c >> l;
    
    vector<vector<int>> people(l + 1, vector<int>(3));
    vector<vector<int>> cars(c, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        int locate;
        string status;
        
        cin >> locate >> status;
        
        people[locate][status == "I"]++;
    }
    
    for (int i = 0; i < c; i++)
        cin >> cars[i][0] >> cars[i][1];
    
    sort(cars.begin(), cars.end(), cmp);
    
    for (int i = 0; i < c; i++)
    {
        int locate = cars[i][0];
        int sits = cars[i][1];
        
        if (!people[locate][0]) continue;
        
        people[locate][0]--;
        sits--;
        
        int drunk = min(people[locate][1], sits);
        int extra = sits - drunk;
        
        people[locate][1] -= drunk;
        people[locate][2] += extra;
    }
    
    int result = 0;
    for (int i = 1; i <= l; i++)
        result += max(people[i][0] - people[i][2], 0) + people[i][1];
    
    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; i++)
    {
        cout << "Data Set " << i << ":\n";
        simulate();
    }
}