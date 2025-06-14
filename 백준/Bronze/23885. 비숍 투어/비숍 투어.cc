#include <iostream>

using namespace std;

int N, M, sx, ex, sy, ey;
bool simulate()
{
    if (sx == ex && sy == ey) return true;
    if (N == 1 || M == 1) return false;
    return ((sx & 1) ^ (sy & 1)) == ((ex & 1) ^ (ey & 1));
}

int main()
{
    cin >> N >> M >> sx >> sy >> ex >> ey;
    cout << (simulate() ? "YES" : "NO");
}