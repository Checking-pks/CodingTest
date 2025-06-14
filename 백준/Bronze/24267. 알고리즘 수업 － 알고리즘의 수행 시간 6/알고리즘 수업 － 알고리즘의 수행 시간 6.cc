#include <iostream>

using namespace std;

int main()
{
    long long n, count = 0;
    
    cin >> n;
    
    for (long long i = 1; i <= n - 2; i++)
        count += (n - i) * (n - i - 1) / 2;
    
    cout << count << "\n3";
}