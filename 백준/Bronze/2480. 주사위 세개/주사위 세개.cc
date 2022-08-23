#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numList(3, 0);
    cin >> numList[0] >> numList[1] >> numList[2];
    
    sort(numList.begin(), numList.end());
    
    if (numList[0] == numList[1] && numList[1] == numList[2])
        cout << 10000 + numList[1] * 1000;
    else if (numList[0] == numList[1] || numList[1] == numList[2])
        cout << 1000 + numList[1] * 100;
    else
        cout << numList[2] * 100;
}