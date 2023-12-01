#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    if (n > s) return {-1};
    
    vector<int> answer(n, s/n);
    
    s -= s/n*n;
    
    for (int i=answer.size()-1; s && i>=0; i--, s--) 
        answer[i]++;
    
    return answer;
}