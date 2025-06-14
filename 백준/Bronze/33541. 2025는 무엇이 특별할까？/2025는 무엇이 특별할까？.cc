#include <iostream>

using namespace std;

int simulate()
{
    int N;
    cin >> N;
    
    for (int i = N + 1, now; i <= 9999; i++)
    {
        now = i / 100 + i % 100;
        
        if (i == now * now)
            return i;
    }
    
    return -1;
}

int main()
{
    cout << simulate();
}