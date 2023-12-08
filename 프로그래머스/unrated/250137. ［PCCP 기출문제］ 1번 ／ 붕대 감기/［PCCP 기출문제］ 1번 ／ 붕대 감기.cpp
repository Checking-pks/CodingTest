#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int maxHealth = health;
    int nowTime = attacks[0][0] + 1;
    health -= attacks[0][1];
    
    for (int i=1; health>0 && i<attacks.size(); i++) {
        int duration = attacks[i][0] - nowTime;
        
        health += duration * bandage[1]
            + (duration / bandage[0] * bandage[2]);
        
        if (health > maxHealth)
            health = maxHealth;
        
        health -= attacks[i][1];
        nowTime = attacks[i][0] + 1;
    }
    
    if (health > 0) 
        return health;
    else 
        return -1;
}