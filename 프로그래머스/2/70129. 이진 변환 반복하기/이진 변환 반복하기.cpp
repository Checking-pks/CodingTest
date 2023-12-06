#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    
    while (s != "1") {
        int oneCount = 0;
        for (int i=0; i<s.length(); i++) 
            oneCount += (s[i] == '1');
        
        answer[0] ++;
        answer[1] += s.length() - oneCount;
        
        s = "";
        for (int i=1; i<=oneCount; i<<=1) {
            if (oneCount & i)
                s += '1';
            else
                s += '0';
        }
    }
    
    return answer;
}