#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A, B, result = 0;
vector<int> nList;

void solve(int now, int pos, int t, int reduce) {
    if (pos == N) {
        result = max(result, now);
        return;
    }
    
    if (t > nList[pos])
        return;
        
    if (t + (A - reduce) <= nList[pos]) {
        t += (A - reduce);
        now++;
    }
    
     
    for (int i=1; !reduce && i<A; i++)
        solve(now, pos + 1, t + i * B, i);
        
    solve(now, pos + 1, t, reduce);
}

int main() {
    cin >> N >> A >> B;
    
    nList = vector<int>(N);
    for (int i=0; i<N; i++) 
        cin >> nList[i];
        
    sort(nList.begin(), nList.end());
    
    for (int i=0; i<A; i++)
        solve(0, 0, i * B, i);
    
    cout << result;
}