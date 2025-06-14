#include <iostream>

using namespace std;

int main() 
{
    int N;
    
    while (cin >> N)
    {
        if (!N) break;
        
        int a = 0, b = 0;
        for (int i = 0, now; i < N; i++)
        {
            cin >> now;
            (now ? b : a)++;
        }
        
        cout << "Mary won " << a << " times and John won " << b << " times\n";
    }
}