#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    
    for (int i = 0, now; i < n; i++)
    {
        cin >> now;
        result += (now & 1);
    }
    
    cout << result;
}