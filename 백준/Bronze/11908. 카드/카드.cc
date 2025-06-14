#include <iostream>

using namespace std;

int main() 
{
    int n, sum = 0, m = 0;
    cin >> n;
    
    for (int i = 0, now; i < n; i++)
    {
        cin >> now;
        sum += now;
        m = max(m, now);
    }
    
    cout << sum - m;
}