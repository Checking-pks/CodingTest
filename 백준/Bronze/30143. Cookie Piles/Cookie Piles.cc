#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N, A, D;
        cin >> N >> A >> D;
        cout << N * A + N * (N - 1) / 2 * D << "\n";
    }
}