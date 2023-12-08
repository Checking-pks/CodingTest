#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {51, 51, 0, 0};
    
    for (int i=0; i<wallpaper.size(); i++) {
        for (int j=0; j<wallpaper[i].length(); j++) {
            if (wallpaper[i][j] == '.') continue;
            
            answer[0] = min(answer[0], i);
            answer[1] = min(answer[1], j);
            answer[2] = max(answer[2], i);
            answer[3] = max(answer[3], j);
        }
    }
    
    answer[2]++; answer[3]++;
    return answer;
}