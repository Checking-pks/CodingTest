#include <iostream>

using namespace std;

int main()
{
    int W, H, N;
    int nowR, nowC;
    int result = 0;
    
    cin >> W >> H >> N;
    cin >> nowR >> nowC;
    
    for (int i = 1, r, c; i < N; i++)
    {
        cin >> r >> c;
        
        int distR = abs(r - nowR);
        int distC = abs(c - nowC);
        
        if ((r < nowR) == (c < nowC))
            result += min(distR, distC) + abs(distR - distC);
        else
            result += distR + distC;
        
        nowR = r;
        nowC = c;
    }
    
    cout << result;
}