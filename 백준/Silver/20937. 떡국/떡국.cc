#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, result = 1;
    cin >> N;
    
    vector<int> visit(50001);
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        
        visit[now]++;
        
        result = max(result, visit[now]);
    }
    
    cout << result;
}