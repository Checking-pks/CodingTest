#include <iostream>

using namespace std;

int main()
{
    int T, N, M, K;
    cin >> T;
    
    while (T--)
    {
        cin >> N >> M >> K;
        
        if (M == 1 && K == 1 && N > 1)
        {
            cout << "-1\n";
            continue;
        }
        
        int count = 0;
        while (N > 0)
        {
            if (count)
            {
                N++;
                count++;
            }
            
            N -= M * K;
            count++;
        }
        
        cout << count << "\n";
    }
}