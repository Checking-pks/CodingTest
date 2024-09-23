#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> a, vector<int> b) {
    vector<vector<int>> field(a.size(), vector<int> (b.size()));
    for (int i=0; i<a.size(); i++)
        for (int j=0; j<b.size(); j++)
            field[i][j] = abs(a[i] - b[j]);
            
    for (int i=0; i<a.size() - 1; i++) {
        for (int j = i, now = field[i][j]; j<b.size() - 1; j++) {
            field[i + 1][j + 1] += now;
            now = min(now, field[i][j + 1]);
        }
    }
    
    int result = field.back()[a.size()-1];
    for (int i=a.size(); i<b.size(); i++) {
        result = min(result, field.back()[i]);
    }
        
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> nList(n), mList(m);
    for (int i=0; i<n; i++) cin >> nList[i];
    for (int i=0; i<m; i++) cin >> mList[i];
    
    sort(nList.begin(), nList.end());
    sort(mList.begin(), mList.end());

    cout << (n > m ? solve(mList, nList) : solve(nList, mList));
}