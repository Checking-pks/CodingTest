#include <iostream>

using namespace std;

int getCount(string S, int cycle)
{
    int count = 0;
    
    for (int i = 0, pos; i < S.length(); i++)
    {
        if (S[i] == '.')
            continue;
        
        count++;
        
        for (int j = 1; i + j * cycle < S.length(); j++)
        {
            if (S[i + j * cycle] == '.')
                break;
            
            S[i + j * cycle] = '.';
        }
    }
    
    return count;
}

int main()
{
    int N;
    string S;
    cin >> N >> S;
    
    int count = N;
    for (int cycle = 1; cycle < N; cycle++)
    {
        int nowCount = getCount(S, cycle);
        
        if (nowCount == -1)
            continue;
        
        count = min(count, nowCount);
    }
    
    cout << count;
}