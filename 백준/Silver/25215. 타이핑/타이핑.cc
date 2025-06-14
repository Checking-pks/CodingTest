#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int count = s.length();
    bool isShift = false;
    
    for (int i = 0; i < s.length(); i++)
    {
        bool isLower = (s[i] - 'a' >= 0);
        
        if (isLower != isShift) continue;
        if (s.length() - 1 == i) continue;
        
        bool isLowerNext = (s[i + 1] - 'a' >= 0);
        
        count++;
        
        if (isLower == isLowerNext)
            isShift = !isShift;
    }
    
    if ((s.back() - 'a' >= 0) == isShift)
        count++;
    
    cout << count;
}