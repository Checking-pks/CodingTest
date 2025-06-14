#include <iostream>
#include <vector>

#define DIV 1000000009
#define SIZE 100000

using namespace std;

vector<vector<int>> result(SIZE + 1, {0, 0});

void init()
{
    result[1][0] = result[2][0] = result[3][0] = 1;
    
    for (int i = 1; i < SIZE; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i + j > SIZE) break;
            
            result[i + j][0] += result[i][1];
            result[i + j][1] += result[i][0];
            
            result[i + j][0] %= DIV;
            result[i + j][1] %= DIV;
        }
    }
}

int main()
{
    init();
    
    int T, N;
    cin >> T;
    
    while (T--)
    {
        cin >> N;
        cout << result[N][0] << " " << result[N][1] << "\n";
    }
}