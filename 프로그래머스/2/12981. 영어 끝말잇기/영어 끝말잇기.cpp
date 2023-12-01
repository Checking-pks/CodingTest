#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    unordered_set<string> cameOutWords;
    cameOutWords.insert(words[0]);
    
    for (int i=1; i<words.size(); i++) {
        if (cameOutWords.find(words[i]) != cameOutWords.end() || words[i-1].back() != words[i].front()) {
            return {i%n+1, i/n+1};
        }
        cameOutWords.insert(words[i]);
    }
    
    return {0, 0};
}