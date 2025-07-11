#include <iostream>

using namespace std;

int main()
{
    int N, result = -1;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int A, B, C, ORM;
        cin >> A >> B >> C;
        
        ORM = A + B + C;
        
        if (ORM < 512) continue;
        
        if (result == -1) result = ORM;
        result = min(result, ORM);
    }
    
    cout << result;
}