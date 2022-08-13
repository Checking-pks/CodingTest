#include <iostream>
#include <stack>

using namespace std;

int main() {
    while (true) {
        int towerNum;
        long long maxArea = 0;
        stack<pair<int, int>> towers;
        
        cin >> towerNum;
    
        if (!towerNum)
            break;
    
        for (int i=0; i<towerNum; i++) {
            int nowTower;
            cin >> nowTower;

            if (towers.empty()) {
                towers.push({nowTower, i});
                continue;
            }

            if (towers.top().first < nowTower) {
                towers.push({nowTower, i});
            } else if (towers.top().first == nowTower) {
                continue;
            } else if (towers.top().first > nowTower) {
                int a;
                
                while (towers.size() && towers.top().first > nowTower) {
                    a = towers.top().second;
                    
                    long long nowArea = (long long)towers.top().first * (i - towers.top().second);

                    if (maxArea < nowArea)
                        maxArea = nowArea;
                    
                    towers.pop();
                }

                if (towers.empty() || towers.top().first != nowTower)
                    towers.push({nowTower, a});
            }
        }

        while (towers.size()) {
            long long nowArea = (long long)towers.top().first * (towerNum - towers.top().second);
            
            if (maxArea < nowArea)
                maxArea = nowArea;
            
            towers.pop();
        }

        cout << maxArea << "\n";
    }

    return 0;
}