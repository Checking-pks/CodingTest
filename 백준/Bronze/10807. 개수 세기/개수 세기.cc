#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map <int, int> numList;
    int times, questionNum;
    cin >> times;

    for (int i=0; i<times; i++) {
        int nowNum;
        cin >> nowNum;

        numList[nowNum]++;
    }

    cin >> questionNum;
    cout << numList[questionNum];
    
    return 0;
}