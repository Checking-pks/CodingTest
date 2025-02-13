#include <iostream>
#include <vector>

using namespace std;

int x = 0, y = 0, dir = 0;
vector<vector<int>> movePos = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main()
{
    int M, n;
    cin >> M >> n;
    
    for (int i = 0; i < n; i++)
    {
        string c;
        int d;
        
        cin >> c >> d;
        
        if (c[0] == 'T')
        {
            dir += (d ? 3 : 1);
            dir %= 4;
        }
        else
        {
            x += movePos[dir][0] * d;
            y += movePos[dir][1] * d;
            
            if (x < 0 || x > M || y < 0 || y > M)
            {
                cout << -1;
                return 0;
            }
        }
    }
    
    cout << x << " " << y;
}