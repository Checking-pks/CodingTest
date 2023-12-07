#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    vector<int> alphabetIdx(26, 0);
    string alphabetList = "abcdefghijklmnopqrstuvwxyz", alphabet="";
    
    for (int i=0; i<skip.length(); i++) 
        alphabetList[skip[i]-'a'] = ' ';
    
    for (int i=0; i<alphabetList.length(); i++) {
        if (alphabetList[i] == ' ') continue;
        alphabetIdx[alphabetList[i]-'a'] = alphabet.size();
        alphabet += alphabetList[i];
    }
    
    string answer = "";
    for (int i=0; i<s.length(); i++) {
        answer += alphabet[(alphabetIdx[s[i]-'a']+index) % alphabet.length()];
    }
    
    return answer;
}