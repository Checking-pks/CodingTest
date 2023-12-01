#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    if (n == stations.size()) return 0;
    
    int answer = 0;
    int left=1, right=stations[0]-w, propagationRange = w*2+1;
    
    for (int i=0; i<stations.size(); i++) {
        right = stations[i] - w;
        
        if (left < right) {
            answer += (right - left) / propagationRange;
            answer += ((right - left) % propagationRange) ? 1 : 0;
        }
        
        left = stations[i] + w + 1;
    }
    
    if (left <= n) {
        answer += (n - left +1) / propagationRange;
        answer += (n - left +1) % propagationRange ? 1 : 0;
    }

    return answer;
}