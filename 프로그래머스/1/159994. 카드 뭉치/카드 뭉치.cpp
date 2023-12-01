#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int pos1 = 0, pos2 = 0;
    
    for (int i=0; i<goal.size(); i++) {
        if (cards1.size() > pos1 && goal[i] == cards1[pos1]) {
            pos1++;
            continue;
        }
        
        if (cards2.size() > pos2 && goal[i] == cards2[pos2]) {
            pos2++;
            continue;
        }
        
        answer = "No";
        break;
    }
    
    return answer;
}