#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    vector<int> exercise(N);
    
    for (int i = 0; i < N; i++)
        cin >> exercise[i];
    
    for (int i = 0, a, b; i < N; i++)
    {
        cin >> a >> b;
        result += max(b - a, 0) * exercise[i];
    }
    
    cout << result;
}