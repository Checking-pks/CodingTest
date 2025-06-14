#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> cups = {1, 0, 0, 2};
    
    string s;
    cin >> s;
    
    for (char c : s)
    {
        if (c == 'A') swap(cups[0], cups[1]);
        if (c == 'B') swap(cups[0], cups[2]);
        if (c == 'C') swap(cups[0], cups[3]);
        if (c == 'D') swap(cups[1], cups[2]);
        if (c == 'E') swap(cups[1], cups[3]);
        if (c == 'F') swap(cups[2], cups[3]);
    }
    
    for (int i = 0; i < 4; i++)
        if (cups[i] == 1)
            cout << i + 1<< "\n";
            
    for (int i = 0; i < 4; i++)
        if (cups[i] == 2)
            cout << i + 1 << "\n";
}