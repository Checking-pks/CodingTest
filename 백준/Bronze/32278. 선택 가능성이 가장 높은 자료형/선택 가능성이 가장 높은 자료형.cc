#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    
    if (-(1ll << 15) <= N && N <= (1ll << 15) - 1)
        cout << "short";
    else if (-(1ll << 31) <= N && N <= (1ll << 31) - 1)
        cout << "int";
    else
        cout << "long long";
}