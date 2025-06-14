#include <iostream>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        
        result += s[0] == 'C';
    }
    
    cout << result;
}