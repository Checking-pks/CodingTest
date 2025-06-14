#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    int result = 0, odd = 1, even = 2;
    for (int i = 0, now; i < N; i++)
    {
        now = nList[i];
        
        result += (now & 1 ? 1 : -1);
        
        if (now == odd) odd += 2;
        if (now == even) even += 2;
    }
    
    cout << (result > 0 ? odd : even);
}