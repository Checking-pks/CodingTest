#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long X, K, result = 0;
    cin >> X >> K;
    
    vector<int> leftSocks(K + 1);
    for (int i = 0, now; i < X; i++)
    {
        cin >> now;
        leftSocks[now]++;
    }
    
    for (int i = 0, now; i < X; i++)
    {
        cin >> now;
        result += X - leftSocks[now];
    }
    
    cout << result;
}