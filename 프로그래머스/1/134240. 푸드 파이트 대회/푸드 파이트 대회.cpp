#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i=1; i<food.size(); i++) {
        for (int j=0; j<food[i]/2; j++) {
            answer.push_back(i + '0');
        }
    }
    
    answer.push_back('0');
    
    for (int i=answer.length()-2; i>=0; i--) {
        answer.push_back(answer[i]);
    }
    
    return answer;
}