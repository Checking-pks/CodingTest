#include <string>
#include <vector>

#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    for (int i=0, paintedRange=0; i<section.size(); i++) {
        while (i<section.size() && section[i] <= paintedRange) i++;
        if (i>=section.size()) break;
        paintedRange = section[i] + m - 1;
        answer++;
    }
    
    return answer;
}