#include <iostream>

using namespace std;

void simulate()
{
    int N, sum = 0;
    cin >> N;
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        sum += now;
    }
    
    if (sum > 0) cout << "Right\n";
    else if (sum < 0) cout << "Left\n";
    else cout << "Equilibrium\n";
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}