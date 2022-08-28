#include <iostream>

using namespace std;

int main() {
    int h, m, s, needTimes, times;
    cin >> h >> m >> s >> needTimes;
    times = h * 3600 + m * 60 + s + needTimes;
    
    cout << (times / 3600) % 24 << " " << (times / 60) % 60 << " " << times % 60;
}