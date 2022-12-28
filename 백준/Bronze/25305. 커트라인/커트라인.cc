#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> scoreList;
    int num, cutLine;
    cin >> num >> cutLine;
    
    for (int i=0, score; i<num; i++) {
        cin >> score;
        scoreList.push_back(score);
    }
    
    sort(scoreList.begin(), scoreList.end(), greater<>());
    
    cout << scoreList[cutLine - 1];
}