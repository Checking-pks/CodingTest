#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> skills;
    
    for (int i=0, num; i<4; i++) {
        cin >> num;
        skills.push_back(num);
    }
    
    sort(skills.begin(), skills.end());
    
    cout << ((skills[3] + skills[0]) > (skills[2] + skills[1]) ? 1 : -1) * ((skills[3] + skills[0]) - (skills[2] + skills[1])); 
}