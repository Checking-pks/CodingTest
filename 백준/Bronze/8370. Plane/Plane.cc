#include <iostream>

using namespace std;

int main() {
    int nRow, nCol, kRow, kCol;
    
    cin >> nRow >> nCol >> kRow >> kCol;
    cout << nRow * nCol + kRow * kCol;

    return 0;
}