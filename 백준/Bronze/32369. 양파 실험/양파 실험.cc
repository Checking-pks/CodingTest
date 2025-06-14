#include <iostream>

using namespace std;

int main()
{
    int N, A, B, o1 = 1, o2 = 1;
    cin >> N >> A >> B;
    
    for (int i = 1; i <= N; i++)
    {
        o1 += A, o2 += B;
        
        if (o1 < o2) swap(o1, o2);
        if (o1 == o2) o2--;
    }
    
    cout << o1 << " " << o2;
}