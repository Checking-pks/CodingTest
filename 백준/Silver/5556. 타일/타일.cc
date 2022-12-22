#include <iostream>

using namespace std;

int calcDistance(int mid, int pos) {
    int dis = mid - pos;
    return (dis < 0) ? -dis : dis;
}

int main() {
    int num, mid, testcase;
    cin >> num >> testcase;

    mid = int(num / 2.0 + 0.5);

    for (int i=0, x, y; i<testcase; i++) {
        cin >> x >> y;

        int xDis = calcDistance(mid, x) - ((num & 1) == 0 && mid < x);
        int yDis = calcDistance(mid, y) - ((num & 1) == 0 && mid < y);

        int dis = (xDis > yDis) ? xDis : yDis;

        cout << (mid - dis - 1) % 3 + 1 << "\n";
    }
}