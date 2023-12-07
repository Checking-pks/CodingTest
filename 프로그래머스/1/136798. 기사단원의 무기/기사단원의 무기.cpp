#include <string>
#include <vector>
#include <cmath>

using namespace std;

int divisionCount(int num, int limit, int power) {
    int result=0;
    double root = sqrt(num);
    
    for (int i=1; i<=root; i++) {
        if (num % i == 0) {
            if (i*i == num) 
                result++;
            else 
                result += 2;
        }
        
        if (result > limit) 
            return power;
    }
    
    return result;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i=1; i<=number; i++) 
        answer += divisionCount(i, limit, power);
    
    return answer;
}