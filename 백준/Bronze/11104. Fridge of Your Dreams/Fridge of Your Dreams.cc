#include <iostream>

using namespace std;

void simulate()
{
    string s;
    cin >> s;
    
    int n = 1, result = 0;
    while (s.length())
    {
        if (s.back() == '1')
            result += n;
        
        s.pop_back();
        n *= 2;
    }
    
    cout << result << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}