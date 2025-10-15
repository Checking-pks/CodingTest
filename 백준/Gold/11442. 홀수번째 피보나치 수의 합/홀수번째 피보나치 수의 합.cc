#include <iostream>
#include <unordered_map>

using namespace std;

#define DIV 1000000007;
typedef long long ll;

unordered_map<ll, ll> record;

ll fib(ll n)
{
    if (n <= 0) return 0;
    if (record.find(n) != record.end())
        return record[n];
    
    ll a = n / 2, b = n / 2 + (n & 1);
    ll result = fib(b) * fib(a + 1) + fib(b - 1) * fib(a);
    result %= DIV;

    return record[n] = result;
}

int main()
{
    ll N;
    cin >> N;
    
    record.insert({1, 1});
    record.insert({2, 1});
    
    cout << fib(N + (N & 1));
}