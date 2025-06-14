#include <iostream>

using namespace std;

int main()
{
    string s;
    int n, result = 0;
    cin >> s >> n;
    
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        
        result += (s.substr(0, 5) == t.substr(0, 5));
    }
    
    cout << result;
}