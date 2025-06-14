#include <iostream>

using namespace std;

int main()
{
    int A, B, N;
    cin >> A >> B >> N;
    
    int result = abs(A - B);
    
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        result = min(result, abs(now - B) + 1);
    }
    
    cout << result;
}