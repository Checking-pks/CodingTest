#include <iostream>
#include <vector>

#define ADD(n) result.push_back(n)

using namespace std;

int N, K;
vector<int> result;

bool isPrime(int n)
{
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
    
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    
    return true;
}

bool init()
{
    if (K == 1)
    {
        if (!isPrime(N))
            return false;
        
        ADD(N);
        
        N = 0;
        K = 0;
        
        return true;
    }
    else if (K == 2)
        return true;
    
    bool nIsOdd = N & 1;
    bool kIsOdd = K & 1;
    
    if (nIsOdd && kIsOdd)
    {
        N -= 3;
        K -= 1;
        
        ADD(3);
    }
    else if (nIsOdd)
    {
        N -= 2 + 3;
        K -= 2;
        
        ADD(2);
        ADD(3);
    }
    else if (kIsOdd)
    {
        N -= 2;
        K -= 1;
        
        ADD(2);
    }
    
    if (N < 0) return false;
    
    return true;
}

bool calculate()
{
    if (!K) return true;
    if (N < 2 * K) return false;
    
    while (K > 2)
    {
        N -= 2;
        K -= 1;
        
        ADD(2);
    }
    
    if (N == 4)
    {
        ADD(2);
        ADD(2);
        
        return true;
    }
    
    for (int i = 2; i <= N / 2; i++)
    {
        if (isPrime(i) && isPrime(N - i))
        {
            ADD(i);
            ADD(N - i);
            
            return true;
        }
    }
    
    return false;
}

int main()
{
    cin >> N >> K;
    
    if (init() == false || calculate() == false)
        cout << -1;
    else
        for (int num : result)
            cout << num << " ";
}