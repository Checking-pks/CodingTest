#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nList(5);
    for (int i=0; i<5; i++)
        cin >> nList[i];
    
    int l = 0, r = 170000, m;
    
    while (l <= r)
    {
        m = (l + r) / 2;
        
        vector<int> now = nList;
        
        bool isCan = true;
        
        if (now[0] + now[1] < m)
            isCan = false;
        else
            now[1] -= max(0, m - now[0]);
        
        if (now[4] + now[3] < m)
            isCan = false;
        else
            now[3] -= max(0, m - now[4]);
        
        if (now[1] + now[2] + now[3] < m)
            isCan = false;
        
        if (isCan)
            l = m + 1;
        else
            r = m - 1;
    }
    
    cout << r;
}