#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    // RT, CF, JM, AN
    vector<int> MBTI(4);
    
    for (int i=0; i<survey.size(); i++) {
        if (survey[i] == "RT") MBTI[0] += (choices[i]-4);
        if (survey[i] == "TR") MBTI[0] += (choices[i]-4) * -1;
        
        if (survey[i] == "CF") MBTI[1] += (choices[i]-4);
        if (survey[i] == "FC") MBTI[1] += (choices[i]-4) * -1;
        
        if (survey[i] == "JM") MBTI[2] += (choices[i]-4);
        if (survey[i] == "MJ") MBTI[2] += (choices[i]-4) * -1;
        
        if (survey[i] == "AN") MBTI[3] += (choices[i]-4);
        if (survey[i] == "NA") MBTI[3] += (choices[i]-4) * -1;
    }
    
    string answer = "";
    
    answer += (MBTI[0] > 0 ? 'T' : 'R');
    answer += (MBTI[1] > 0 ? 'F' : 'C');
    answer += (MBTI[2] > 0 ? 'M' : 'J');
    answer += (MBTI[3] > 0 ? 'N' : 'A');
    
    return answer;
}