#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int Q;
    cin >> Q;
    
    map<int, int> height;
    
    for (int i = 0, type, num; i < Q; i++)
    {
        cin >> type >> num;
        
        if (type == 1)
        {
            int maxHeight = 0;
            for (int j = 0; j < 4; j++)
                maxHeight = max(maxHeight, height[num + j]);
            
            for (int j = 0; j < 4; j++)
                height[num + j] = maxHeight + 1;
        }
        
        if (type == 2)
        {
            height[num] += 4;
        }
        
        if (type == 3)
        {
            cout << height[num] << "\n";
        }
    }
}