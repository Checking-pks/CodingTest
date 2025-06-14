#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    int d1 = abs(s1[0] - s2[0]), d2 = abs(s1[1] - s2[1]);
    cout << min(d1, d2) << " " << max(d1, d2);
}