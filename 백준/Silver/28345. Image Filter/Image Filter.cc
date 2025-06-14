#include <iostream>
#include <vector>

using namespace std;

void simulate()
{
    int R, C;
    cin >> R >> C;
    
    vector<vector<int>> field(R + 1, vector<int>(C + 1));
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> field[i][j];
            
            int a = field[i][j - 1],
                b = field[i - 1][j],
                c = field[i - 1][j - 1];
            
            vector<int> predictedValue = {0, a, b, (a + b) / 2, a + b - c};
            
            int minPrediction = field[i][j], minIdx = 0;
            for (int k = 1, now; k < predictedValue.size(); k++)
            {
                now = field[i][j] - predictedValue[k];
                
                if (abs(minPrediction) > abs(now))
                {
                    minPrediction = now;
                    minIdx = k;
                }
            }
            
            cout << minIdx << " " << minPrediction << " ";
        }
        
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}