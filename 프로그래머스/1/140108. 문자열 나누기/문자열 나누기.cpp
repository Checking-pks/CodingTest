#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0, stack = 0;
    
    for (int i=0, nowChar=s.front(); i<s.length(); i++) {
        stack += (nowChar == s[i] ? 1 : -1);
        if (stack == 0) {
            nowChar = s[i+1];
            answer++;
        }
    }
    
    if (stack) answer++;
    return answer;
}