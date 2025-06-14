#include <iostream>
#include <vector>

using namespace std;

bool isPalindromic(vector<int> l)
{
    for (int i = 0; i * 2 < l.size(); i++)
        if (l[l.size() - i - 1] != l[i])
            return false;
    
    return true;
}

vector<int> getList(int n, int i)
{
    vector<int> result;
    
    while (n)
    {
        result.push_back(n % i);
        n /= i;
    }
    
    return result;
}

bool simulate()
{
    int N;
    cin >> N;
    
    for (int i = 2; i <= 64; i++)
    {
        vector<int> nList = getList(N, i);
        
        if (isPalindromic(nList))
            return true;
    }
    
    return false;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        cout << simulate() << "\n";
}