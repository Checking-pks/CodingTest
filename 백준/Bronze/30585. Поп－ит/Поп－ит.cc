#include <iostream>

using namespace std;

int main()
{
    int h, w, a = 0, b = 0;
    cin >> h >> w;
    
    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        
        for (int j = 0; j < w; j++)
        {
            (s[j] == '0' ? a : b)++;
        }
    }
    
    cout << min(a, b);
}