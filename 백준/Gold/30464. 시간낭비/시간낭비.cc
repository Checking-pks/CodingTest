#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> nList; 

void input()
{
    cin >> N;
    nList.resize(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> nList[i];
}

void simulate()
{
    vector<int> moveCount1(N + 1);
    for (int i = N - 1; i > 0; i--)
    {
        int movePos = i + nList[i];
        
        if (movePos > N) continue;
        
        if (movePos == N) moveCount1[i] = 1;
        else if (moveCount1[movePos]) moveCount1[i] = moveCount1[movePos] + 1;
    }
    
    vector<int> moveCount2(N + 1);
    for (int i = 1; i < N; i++)
    {
        int movePos = i - nList[i];
        
        if (movePos < 1) continue;
        
        int mc1 = moveCount1[movePos];
        int mc2 = moveCount2[movePos];
        
        if (mc1) mc1++;
        if (mc2) mc2++;
        
        moveCount2[i] = max(mc1, mc2);
    }
    
    vector<int> moveCount3(N + 1);
    for (int i = N - 1; i > 0; i--)
    {
        int movePos = i + nList[i];
        
        if (movePos > N) continue;
        
        int mc1 = moveCount1[movePos];
        int mc2 = moveCount2[movePos];
        int mc3 = moveCount3[movePos];
        
        if (mc1) mc1++;
        if (mc2) mc2++;
        if (mc3) mc3++;
        
        moveCount3[i] = max(mc1, max(mc2, mc3));
    }
    
    int result = max(moveCount1[1], max(moveCount2[1], moveCount3[1]));
    
    cout << (result ? result : -1);
}

int main()
{
    input();
    simulate();
    
}