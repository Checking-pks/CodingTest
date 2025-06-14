#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    for (int i = 0; i < 4; i++)
    {
        string s;
        int n;
        
        cin >> s >> n;
        
        result += (s == "Es" ? 21 : 17) * n;
    }
    
    cout << result;
}