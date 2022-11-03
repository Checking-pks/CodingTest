#include <iostream>

using namespace std;

int main() {
    int appleScore = 0, bananaScore = 0;
    
    for (int i=3, goalNum; i>0; i--) {
        cin >> goalNum;
        appleScore += goalNum * i;
    }
    
    for (int i=3, goalNum; i>0; i--) {
        cin >> goalNum;
        bananaScore += goalNum * i;
    }
    
    if (appleScore > bananaScore) cout << "A";
    if (appleScore < bananaScore) cout << "B";
    if (appleScore == bananaScore) cout << "T";
}