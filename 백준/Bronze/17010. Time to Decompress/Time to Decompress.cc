#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int L;
        char C;
        
        cin >> L >> C;
        cout << string(L, C) << "\n";
    }
}