#include <iostream>

using namespace std;

typedef long long ll;

ll DIVISION = 1e+9 + 9;

int main()
{
    ll N, result = 1;
    cin >> N;
    
    for (int i=1; i<=N; i++) {
        result *= (2*i - 1);
        result %= DIVISION;
    }
    
    cout << result;
}