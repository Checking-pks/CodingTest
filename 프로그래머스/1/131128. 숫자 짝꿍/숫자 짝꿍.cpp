#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    vector<int> numListX(10), numListY(10);
    string answer = "";
    
    for (int i=0; i<X.length(); i++) numListX[X[i]-'0']++;
    for (int i=0; i<Y.length(); i++) numListY[Y[i]-'0']++;
    
    for (int i=9; i>=0; i--) {
        answer += string(min(numListX[i], numListY[i]), char('0' + i));
    }
    
    if (answer == "") return "-1";
    if (answer[0] == '0') return "0";
    return answer;
}