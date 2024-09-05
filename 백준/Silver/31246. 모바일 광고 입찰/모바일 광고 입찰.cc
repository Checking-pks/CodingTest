#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first - a.second > b.first - b.second;
}

int main()
{
    int N, K, result = 0;
    cin >> N >> K;
    
    vector<pair<int, int>> bidList(N);
    for (int i=0; i<N; i++)
        cin >> bidList[i].first >> bidList[i].second;
        
    sort(bidList.begin(), bidList.end(), cmp);
    
    for (int i=0; i<N; i++) {
        result = max(result, max(bidList[i].second - bidList[i].first, 0));
        
        if (--K == 0)
            break;
    }
    
    cout << result;
}