#include <string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int stack = 0;
    
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(') {
            stack++;
        } 
        
        if (s[i] == ')') {
            stack--;
        }
        
        if (stack < 0) {
            answer = false;
            break;
        }
    }
    
    if (stack != 0) return false;
    else return answer;
}