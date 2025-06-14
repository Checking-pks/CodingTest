#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    
    int bestNum = 0, bestScore = -1;
    for (int i = 0; i < M; i++)
    {
        int nowNum, nowScore = 0;
        cin >> nowNum;
        
        for (int j = 0; j < N; j++)
        {
            char s;
            cin >> s;
            
            nowScore += (s == 'O') * nList[j];
        }
        
        if ((nowScore > bestScore) || 
            (nowScore == bestScore && nowNum < bestNum))
        {
            bestNum = nowNum;
            bestScore = nowScore;
        }
    }
    
    cout << bestNum << " " << bestScore;
}