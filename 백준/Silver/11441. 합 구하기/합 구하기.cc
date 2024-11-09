#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    cin >> N;
    
    vector<int> nList(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> nList[i];
        nList[i] += nList[i - 1];
    }
    
    cin >> M;
    for (int i = 0, a, b; i < M; i++)
    {
        cin >> a >> b;
        cout << nList[b] - nList[a - 1] << "\n";
    }
}