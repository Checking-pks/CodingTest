#include <iostream>

using namespace std;

int main()
{
    int N, result = 0;
    string S;
    cin >> N >> S;
    
    for (int i = 0; i < N; i++)
        result += (S[i] == 'o' ? 1 : 2);
    
    cout << result;
}