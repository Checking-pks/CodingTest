#include <iostream>

using namespace std;

int main()
{
    int S;
    int M;
    
    cin >> S >> M;
    for (int i = 0, now; i < 2; i++)
    {
        cin >> now;
        M += now;
    }
    
    cout << (S > 240 && S > M ? "flight" : "high speed rail");
}