#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<>> bucket;
 
    for (int i=0; i<score.size(); i++) {
        bucket.push(score[i]);
        if (bucket.size() > k) bucket.pop();
        answer.push_back(bucket.top());
    }
    
    return answer;
}