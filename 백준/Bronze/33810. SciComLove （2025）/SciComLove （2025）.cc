#include <iostream>

using namespace std;

int main()
{
    string S, T = "SciComLove";
    cin >> S;
    
    int cnt = 0;
    for (int i = 0; i < S.length(); i++)
        cnt += S[i] != T[i];
    
    cout << cnt;
}