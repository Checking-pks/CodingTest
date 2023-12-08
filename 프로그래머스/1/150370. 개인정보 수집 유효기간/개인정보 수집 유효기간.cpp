#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int dayFormat(string day) {
    return stoi(day.substr(2, 2)) * 12 * 28 +
        stoi(day.substr(5, 2)) * 28 +
        stoi(day.substr(8));
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    int todayDay = dayFormat(today);
    unordered_map<char, int> termList;
    vector<int> answer;
    
    for (int i=0; i<terms.size(); i++) {
        termList[terms[i][0]] = stoi(terms[i].substr(2));
    }
    
    for (int i=0; i<privacies.size(); i++) {
        int now = dayFormat(privacies[i].substr(0, 10)) + termList[privacies[i].back()] * 28;
        
        if (todayDay < now) continue;
        answer.push_back(i+1);
    }
    
    return answer;
}