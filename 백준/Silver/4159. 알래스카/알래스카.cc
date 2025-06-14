#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n)
    {
        bool isPossible = true;
        vector<int> nList(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nList[i];
            nList.push_back(2844 - nList[i]);
        }
        
        nList.push_back(0);
        nList.push_back(2844);
        
        sort(nList.begin(), nList.end());
        
        for (int i = 1; i < nList.size(); i++)
        {
            if (nList[i] - nList[i - 1] > 200)
            {
                isPossible = false;
                break;
            }
        }
        
        cout << (isPossible ? "POSSIBLE\n" : "IMPOSSIBLE\n");
        cin >> n;
    }
}