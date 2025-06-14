#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    if (N != M) 
        cout << (min(N, M) - 1) * (min(N, M) - 1);
    else
        cout << (N - 2) * 2 + (N - 3) * (N - 3);
}