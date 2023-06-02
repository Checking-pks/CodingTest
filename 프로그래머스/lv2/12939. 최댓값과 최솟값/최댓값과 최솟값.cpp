#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    // 변수 설정
    int min = 0, max = 0, num=0;
    bool isMinus = false;
    
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            if (isMinus) num = -num;
            
            if (min == 0 || min > num) min = num;
            if (max == 0 || max < num) max = num;
            
            num = 0;
            isMinus = false;
        } else if (s[i] == '-') {
            isMinus = true;
        } else {
            num = num * 10 + (s[i] - '0');
        }
    }
    
    if (isMinus) num = -num;
            
    if (min == 0 || min > num) min = num;
    if (max == 0 || max < num) max = num;
    
    return to_string(min) + " " + to_string(max);
}