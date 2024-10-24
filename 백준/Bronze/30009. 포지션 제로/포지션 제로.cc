#include <iostream>

using namespace std;

int main()
{
    int N, X, Y, R;
    cin >> N >> X >> Y >> R;
    
    int min = X - R, max = X + R;
    
    int A = 0, B = 0;
    for (int i=0, now; i<N; i++) {
        cin >> now;
        
        A += (min < now && now < max);
        B += (min == now || max == now);
    }
    
    cout << A << " " << B;
}