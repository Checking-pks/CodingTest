#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    unordered_map<string, int> yearningList;
    
    for (int i=0; i<name.size(); i++) 
        yearningList[name[i]] = yearning[i];
    
    vector<int> answer(photo.size(), 0);
    
    for (int i=0; i<photo.size(); i++) {
        for (int j=0; j<photo[i].size(); j++) {
            answer[i] += yearningList[photo[i][j]];
        }
    }
    
    return answer;
}