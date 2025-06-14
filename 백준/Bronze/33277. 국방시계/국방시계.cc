#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int min = M * 1440 / N;
    int hour = min / 60;
    
    min %= 60;
    
    cout << (hour < 10 ? "0" : "") << hour << ":"
        << (min < 10 ? "0" : "") << min;
}