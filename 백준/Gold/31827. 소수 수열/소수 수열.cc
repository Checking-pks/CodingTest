#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> getPrimeList(int num)
{
    vector<bool> numList(num + 1);
    numList[0] = numList[1] = true;
    
    int count = 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (numList[i]) continue;
        
        for (int j = i * i; j <= num; j += i)
            numList[j] = true;
    }
    
    return numList;
}

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int N, K;
    vector<bool> primeList = getPrimeList(1000000);
    
    cin >> N >> K;
    
    int i = 1, sum = 0;
    vector<int> nList;
    while (nList.size() < N)
    {
        if (primeList[++i])
            continue;
        
        if (gcd(i, K) != 1)
            continue;
        
        if (nList.size() < K - 1)
        {
            sum += i;
            nList.push_back(i);
            
            cout << i << " ";
        }
        else if ((sum + i - nList[nList.size() - K]) % K == 0)
        {
            sum += i;
            sum -= nList[nList.size() - K];
            nList.push_back(i);
            
            cout << i << " ";
        }
    }
}