#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void findVirus(vector<vector<bool>> computerRoad, vector<int>& alreadyCheck, int computerNum) {
	alreadyCheck.push_back(computerNum);
    
    for (int i=1; i<computerRoad.size(); i++) 
        if (computerRoad[computerNum][i] && find(alreadyCheck.begin(), alreadyCheck.end(), i) == alreadyCheck.end()) 
			findVirus(computerRoad, alreadyCheck, i);
}

int main() {
    int computerNum, roadNum;
    cin >> computerNum >> roadNum;
    
    vector<vector<bool>> computerRoad(computerNum + 1, vector<bool>(computerNum + 1, false));
	vector<int> alreadyCheck;
    
    for (int i=0; i<roadNum; i++) {
        int c1, c2;
        cin >> c1 >> c2;
        
        computerRoad[c1][c2] = true;
        computerRoad[c2][c1] = true;
    }

	findVirus(computerRoad, alreadyCheck, 1);
    
    cout << alreadyCheck.size() - 1;
    
    return 0;
}