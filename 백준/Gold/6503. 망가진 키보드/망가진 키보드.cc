#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int m;
    cin >> m;
    
    while (m)
    {
        cin.ignore();
        
        string s;
        getline(cin, s);
        
        int result = 0, sum = 0;
        map<char, int> countMap;
        for (int i = 0, pos = 0; i < s.length(); i++)
        {
            countMap[s[i]]++;
            sum++;
            
            while (countMap.size() > m)
            {
                countMap[s[pos]]--;
                sum--;
                if (!countMap[s[pos]])
                    countMap.erase(s[pos]);
                pos++;
            }
            
            result = max(result, sum);
        }
        
        cout << result << "\n";
        cin >> m;
    }
}