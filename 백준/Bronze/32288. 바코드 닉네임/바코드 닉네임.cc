#include <iostream>

using namespace std;

int main()
{
    int n;
    string S;
    cin >> n >> S;
    
    for (int i = 0; i < n; i++)
        cout << (S[i] == 'I' ? "i" : "L");
}