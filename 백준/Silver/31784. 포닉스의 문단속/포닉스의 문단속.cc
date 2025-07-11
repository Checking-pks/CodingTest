#include <iostream>

using namespace std;

int N, K;
string S;

void turning()
{
    for (int i = 0; i < S.length(); i++)
    {
        if (!K) break;
        if (S[i] == 'A') continue;
        
        int turnCount = 'Z' - S[i] + 1;
        
        if (turnCount > K) continue;
        
        K -= turnCount;
        S[i] = 'A';
    }
    
    if (!K) return;
    
    S.back() = char((S.back() - 'A' + K) % 26 + 'A');
}

int main()
{
    cin >> N >> K >> S;
    
    turning(); 
    
    cout << S;
}