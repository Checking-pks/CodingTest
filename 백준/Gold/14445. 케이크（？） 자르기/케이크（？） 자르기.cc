#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    
    if (N == 1) cout << 0;
    else if (N & 1) cout << N / 2 + 1;
    else cout << N / 2;
}