#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> pronunciation = {"aya", "ye", "woo", "ma"};
    int answer = 0;
    
    for (int i=0; i<babbling.size(); i++) {
        bool isBabbling = true;
        for (int j=0, last=-1; j<babbling[i].length();) {
            bool findBabbling = false;
            for (int k=0; k<pronunciation.size(); k++) {
                if (last == k) continue;
                if (babbling[i].substr(j, pronunciation[k].length()) == pronunciation[k]) {
                    j += pronunciation[k].length();
                    last = k;
                    findBabbling = true;
                    break;
                }
            }
            
            if (!findBabbling) {
                isBabbling = false;
                break;
            }
        }
        
        answer += isBabbling;
    }
    
    return answer;
}