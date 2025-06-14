#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    ll N, sum = 0;
    cin >> N;
    
    vector<ll> nList(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nList[i];
        sum += nList[i];
    }
    
    sort(nList.begin(), nList.end());
    
    cout << max(sum, sum + max(
        2 * nList[0] * nList[1] - nList[0] - nList[1],
        2 * nList[N - 2] * nList[N - 1] - nList[N - 2] - nList[N - 1] 
    ));
}