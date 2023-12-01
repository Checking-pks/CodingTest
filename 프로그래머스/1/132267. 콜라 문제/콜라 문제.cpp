#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int changedCoke = (n / a) * b;
        n -= (n / a) * a;
        answer += changedCoke;
        n += changedCoke;
    }
    
    return answer;
}