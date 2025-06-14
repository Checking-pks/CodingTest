#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2;
    
    cin >> s1 >> s2;
    
    for (int i = 1; s1 != "END" && s2 != "END"; i++)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        cout << "Case " << i << ": " << (s1 == s2 ? "same\n" : "different\n");
        
        cin >> s1 >> s2;
    }
}