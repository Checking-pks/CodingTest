#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int t = -1;
    
    for (int i = 0, M, O; i < N; i++)
    {
        cin >> M >> O;
        
        if (O) continue;
        
        if (t == -1) t = M;
        
        t = min(t, M);
    }
    
    cout << t;
}