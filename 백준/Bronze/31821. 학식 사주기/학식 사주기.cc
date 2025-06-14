#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, result = 0;
    cin >> N;
    
    vector<int> nList(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> nList[i];
    
    cin >> M;
    for (int i = 0, now; i < M; i++)
    {
        cin >> now;
        result += nList[now];
    }
    
    cout << result;
}