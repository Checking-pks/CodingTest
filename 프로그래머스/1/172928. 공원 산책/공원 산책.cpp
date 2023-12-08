#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    unordered_map<char, pair<int, int>> move = {
        {'N', {-1, 0}}, {'S', {1, 0}}, {'E', {0, 1}}, {'W', {0, -1}}};
    vector<int> answer;
    
    for (int i=0; i<park.size(); i++) 
        for (int j=0; j<park[i].length(); j++) 
            if (park[i][j] == 'S') 
                answer = {i, j};
    
    for (int i=0; i<routes.size(); i++) {
        char rotation = routes[i][0];
        int moveRange = (routes[i][2]-'0');
        
        int movePosX = answer[0] + move[rotation].first  * moveRange;
        int movePosY = answer[1] + move[rotation].second * moveRange;
        
        if (movePosX < 0 || movePosX >= park.size())    continue;
        if (movePosY < 0 || movePosY >= park[0].size()) continue;
        
        bool canMove = true;
        
        for (int i=min(answer[0], movePosX); canMove && i<=max(answer[0], movePosX); i++) 
            if (park[i][movePosY] == 'X') 
                canMove = false;
        
        for (int i=min(answer[1], movePosY); canMove && i<=max(answer[1], movePosY); i++) 
            if (park[movePosX][i] == 'X') 
                canMove = false;
        
        if (canMove) 
            answer = {movePosX, movePosY};
    }
    
    return answer;
}