#include <iostream>

using namespace std;

int main()
{
    int N, X, sum = 0;
    cin >> N >> X;
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        sum += now;
    }
    
    cout << (sum % X == 0);
}