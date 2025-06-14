#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll N;

ll simulate()
{
    ll totalSum = N * (N + 1) / 2;
    
    if (totalSum & 1)
        return 0;
    
    totalSum /= 2;
    
    vector<ll> sumList(totalSum + 1);
    sumList[0] = 1;
    
    for (int i = 1; i <= N; i++)
        for (int j = totalSum; j >= i; j--)
            sumList[j] += sumList[j - i];
    
    return sumList.back() / 2;
}

int main()
{
    cin >> N;
    cout << simulate();
}