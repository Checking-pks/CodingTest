#include <iostream>

using namespace std;

int main()
{
    int N, H;
    cin >> N >> H;
    
    for (int i = 1, d; i <= N; i++)
    {
        cin >> d;
        H -= d;
        
        if (H <= 0)
        {
            cout << i;
            return 0;
        }
    }
    
    cout << -1;
}