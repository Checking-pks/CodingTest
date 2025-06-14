#include <iostream>
#include <vector>

using namespace std;

vector<int> odd = {0, 7, 4, 1, 8, 5, 2, 9, 6, 3};

int main()
{
    string s;
    cin >> s;
    
    int value = 0;
    bool isOdd = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*')
        {
            isOdd = (i & 1);
            continue;
        }
        
        value += (s[i] - '0') * (i & 1 ? 3 : 1);
    }
    
    int num = abs(10 - (value % 10)) % 10;
    
    cout << (isOdd ? odd[num] : num);
}