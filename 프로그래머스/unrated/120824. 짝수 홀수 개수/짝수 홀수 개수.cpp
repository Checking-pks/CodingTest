#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);
    
    for (int n:num_list)
        answer[n&1]++;
    
    return answer;
}