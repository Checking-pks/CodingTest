#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> ab(N), ac(N), bc(N);
    
    for (int i = 0, a, b, c; i < N; i++)
    {
        cin >> a >> b >> c;
        
        ab[i] = a + b;
        ac[i] = a + c;
        bc[i] = b + c;
    }
    
    sort(ab.begin(), ab.end(), greater<int>());
    sort(ac.begin(), ac.end(), greater<int>());
    sort(bc.begin(), bc.end(), greater<int>());
    
    int SumAB = 0, SumAC = 0, SumBC = 0;
    for (int i = 0; i < K; i++)
    {
        SumAB += ab[i];
        SumAC += ac[i];
        SumBC += bc[i];
    }
    
    cout << max(SumAB, max(SumAC, SumBC));
}