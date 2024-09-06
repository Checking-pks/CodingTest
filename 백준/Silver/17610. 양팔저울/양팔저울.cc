#include <iostream>
#include <vector>

using namespace std;

vector<int> kList;
vector<bool> sList;

void dfs(int pos, int sum) {
    if (pos == kList.size()) {
        if (sum > 0)
            sList[sum] = true;
        return;
    }
    
    dfs(pos + 1, sum);
    dfs(pos + 1, sum + kList[pos]);
    dfs(pos + 1, sum - kList[pos]);
}

int main()
{
    int k, sum = 0, result = 0;
    cin >> k;
    
    kList = vector<int>(k);

    for (int i=0; i<k; i++) {
        cin >> kList[i];
        sum += kList[i];
    }
    
    sList = vector<bool>(sum + 1);
    
    dfs(0, 0);
    
    for (int i=1; i<=sum; i++)
        if (!sList[i])
            result++;
            
    cout << result;
}