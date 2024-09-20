#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll N, result = 0;
    cin >> N;
    
    for (ll a = 1, b = 1, sum = 0; a <= N; a++) {
        sum += a;
        
        while (sum > N) 
            sum -= b++;
            
        result += sum == N;
    }
    
    cout << result;
}