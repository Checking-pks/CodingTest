#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c, N;
    cin >> a >> b >> c >> N;
    
    vector<int> result(a + b + c + 1, 2);
    vector<vector<int>> test(N, vector<int>(4));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> test[i][j];
        
        if (!test[i].back()) continue;
        
        result[test[i][0]] = 1;
        result[test[i][1]] = 1;
        result[test[i][2]] = 1;
    }
    
    for (int i = 0; i < N; i++)
    {
        if (test[i].back()) continue;
        
        if (result[test[i][0]] == 2)
            result[test[i][0]] = (1 == result[test[i][1]] && 1 == result[test[i][2]] ? 0 : 2);
        
        if (result[test[i][1]] == 2)
            result[test[i][1]] = (1 == result[test[i][0]] && 1 == result[test[i][2]] ? 0 : 2);
        
        if (result[test[i][2]] == 2)
            result[test[i][2]] = (1 == result[test[i][0]] && 1 == result[test[i][1]] ? 0 : 2);
    }
    
    for (int i = 1; i < result.size(); i++)
        cout << result[i] << "\n";
}