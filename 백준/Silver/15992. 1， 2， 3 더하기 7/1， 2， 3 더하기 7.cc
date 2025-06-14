#include <iostream>
#include <vector>

#define DIV 1000000009

using namespace std;

vector<vector<int>> nList(1001, vector<int>(1001));

void init()
{
    nList[1][1] = nList[2][1] = nList[3][1] = 1;
    
    for (int i = 1; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            if (!nList[j][i]) continue;
            
            for (int k = 1; k <= 3; k++)
            {
                if (j + k > 1000) break;
                nList[j + k][i + 1] += nList[j][i];
                nList[j + k][i + 1] %= DIV;
            }
        }
    }
}

int main()
{
    init();
    
    int T, N, M;
    cin >> T;
    
    while (T--)
    {
        cin >> N >> M;
        cout << nList[N][M] << "\n";
    }
}