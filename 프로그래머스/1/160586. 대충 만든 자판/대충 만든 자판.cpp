#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> alphabet(26, 101);
    
    for (int i=0; i<keymap.size(); i++) 
        for (int j=0; j<keymap[i].length(); j++) 
            alphabet[keymap[i][j]-'A'] = min(alphabet[keymap[i][j]-'A'], j+1);
    
    for (int i=0; i<targets.size(); i++) {
        int nowTimes = 0;
        for (int j=0; j<targets[i].length(); j++) {
            if (alphabet[targets[i][j]-'A'] == 101) {
                nowTimes = -1;
                break;
            }
            nowTimes += alphabet[targets[i][j]-'A'];
        }
        answer.push_back(nowTimes);
    }
    
    return answer;
}