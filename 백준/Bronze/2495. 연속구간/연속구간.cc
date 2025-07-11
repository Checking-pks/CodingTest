#include <iostream>

using namespace std;

int main()
{
    string s;
    
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        
        int result = 0;
        for (int i = 1, stack = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
                stack++;
            else
                stack = 1;
            
            result = max(result, stack);
        }
        
        cout << result << "\n";
    }
}