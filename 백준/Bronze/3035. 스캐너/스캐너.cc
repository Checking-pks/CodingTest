#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int R, C, ZR, ZC;
    cin >> R >> C >> ZR >> ZC;
    
    vector<string> s(R);
    for (int i = 0; i < R; i++)
        cin >> s[i];
    
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < ZR; j++)
        {
            for (int k = 0; k < C; k++)
            {
                for (int l = 0; l < ZC; l++)
                {
                    cout << s[i][k];
                }
            }
            
            cout << "\n";
        }
    }
}