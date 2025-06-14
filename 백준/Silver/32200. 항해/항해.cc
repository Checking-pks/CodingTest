#include <iostream>

using namespace std;

int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    
    int day = 0, trash = 0;
    for (int i = 0, now, nowDay, nowTrash; i < N; i++)
    {
        cin >> now;
        
        nowDay = now / X;
        nowTrash = max(now - nowDay * Y, 0);
        
        day += nowDay;
        trash += nowTrash;
    }
    
    cout << day << "\n" << trash;
}