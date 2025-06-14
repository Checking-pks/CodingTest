#include <iostream>

using namespace std;

int main()
{
    int N, M, priceTotal = 0, maxPrice = 0;
    cin >> N >> M;
    
    for (int i = 0, Good, Bad; i < M; i++)
    {
        cin >> Good >> Bad;
        
        if (Good >= N) continue;
        
        priceTotal += N - Good;
        maxPrice = max(maxPrice, N - Good);
    }
    
    cout << priceTotal - maxPrice;
}