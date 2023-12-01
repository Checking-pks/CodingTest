#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> alphabet(26, -1);
    
    for (int i=0; i<s.length(); i++) {
        int nowIdx = s[i] - 'a';
        answer.push_back(alphabet[nowIdx] < 0 ? -1 : i - alphabet[nowIdx]);
        alphabet[s[i] - 'a'] = i;
    }
    
    return answer;
}