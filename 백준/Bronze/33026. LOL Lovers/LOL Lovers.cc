#include <iostream>

using namespace std;

pair<int, int> counting(string s)
{
    pair<int, int> result = {0, 0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            result.first++;
        else
            result.second++;
    }
    
    return result;
}

int main()
{
    int N, result = -1;
    string S;
    cin >> N >> S;
    
    for (int i = 1; i < N; i++)
    {
        string aStr = S.substr(0, i);
        string bStr = S.substr(i);
        
        auto aCount = counting(aStr);
        auto bCount = counting(bStr);
        
        if (!(aCount.first + aCount.second)) continue;
        if (!(bCount.first + bCount.second)) continue;
        
        if (aCount.first == bCount.first) continue;
        if (aCount.second == bCount.second) continue;
        
        result = i;
        break;
    }
    
    cout << result;
}