#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    bool playThrow = true;
    deque <int> numList;

    cin >> n;

    for (int i=1; i<=n; i++)
        numList.push_back(i);

    while (numList.size() != 1) {
        if (!playThrow) 
            numList.push_back(numList.front());
        
        numList.pop_front();
        playThrow = !playThrow;
    }

    cout << numList.front();
    
    return 0;
}