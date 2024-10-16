#include <iostream>

using namespace std;

int main()
{
    int N, result = 0;
    string S;
    cin >> N >> S;
    
    for (int i=0; i<(N >> 1); i++) 
        result += S[i] != S[N - i - 1];
    
    cout << result;
}