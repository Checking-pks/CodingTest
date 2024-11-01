#include <iostream>

using namespace std;

int main()
{
    int N;
    
    while (cin >> N)
    {
        int now = 1;
        for (int i = 2; i <= N; i++)
        {
            now *= i;
            
            while (!(now % 10))
                now /= 10;
            
            now %= 100000;
        }
        
        cout << string(5 - to_string(N).length(), ' ')
            << N << " -> " << now % 10 << "\n";
    }
}