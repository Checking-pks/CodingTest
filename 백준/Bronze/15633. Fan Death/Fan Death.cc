#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int result = n + (n != 1);
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            result += i;
    
    cout << result * 5 - 24;
}