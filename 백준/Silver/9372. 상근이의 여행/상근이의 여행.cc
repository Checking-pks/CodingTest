#include <iostream>

using namespace std;

void simulate()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0, a, b; i < M; i++)
        cin >> a >> b;
    
    cout << N - 1 << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}