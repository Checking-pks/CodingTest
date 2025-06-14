#include <iostream>

using namespace std;

int main()
{
    int N, first, last, result = 0;
    
    cin >> N;
    cin >> first;
    
    last = first;
    
    for (int i = 1, now; i < N; i++)
    {
        cin >> now;
        
        result += (last >= now);
        last = now;
    }
    
    result += (first <= last);
    
    cout << result;
}