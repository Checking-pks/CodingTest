#include <iostream>

using namespace std;

int main()
{
    int N, n = 1, result = 0;
    cin >> N;
    
    string s = "";
    
    while (N)
    {
        s += char(N % 2 + '0');
        N /= 2;
    }
    
    while (s.length())
    {
        if (s.back() == '1')
            result += n;
        
        s.pop_back();
        n *= 2;
    }
    
    cout << result;
}