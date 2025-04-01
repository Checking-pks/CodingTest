#include <iostream>

using namespace std;

void simulate()
{
    int M, in = 0, result = 0;
    cin >> M;
    
    for (int i = 0, p1, p2; i < M; i++)
    {
        cin >> p1 >> p2;
        
        result += max(p2 - p1 - in, 0);
        in = max(p1 + in - p2, 0);
    }
    
    cout << result << "\n";
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}