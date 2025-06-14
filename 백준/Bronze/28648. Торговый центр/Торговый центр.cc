#include <iostream>

using namespace std;

int main()
{
    int n, result = 200;
    cin >> n;
    
    for (int i = 0, t, l; i < n; i++)
    {
        cin >> t >> l;
        result = min(result, t + l);
    }
    
    cout << result;
}