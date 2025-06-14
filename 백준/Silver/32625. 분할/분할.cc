#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> nList(N);

void input()
{
    cin >> N;
    
    nList.resize(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
}

int check(int start, int end)
{
    int Min, Max;
    Min = Max = nList[start];
    
    for (int i = start + 1; i < end; i++)
    {
        Min = min(Min, nList[i]);
        Max = max(Max, nList[i]);
    }
    
    return Min + Max;
}

bool simulate()
{
    for (int i = 1, now; i * 2 <= N; i++)
    {
        if (N % i) continue;
        
        now = check(0, i);
        
        bool isSame = true;
        for (int j = i; j + i <= N; j += i)
        {
            if (now != check(j, j + i))
            {
                isSame = false;
                break;
            }
        }
        
        if (isSame) return true;
    }
    
    return false;
}

int main()
{
    input();
    cout << simulate();
}