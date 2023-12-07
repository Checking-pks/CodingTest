#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int checkBurger(stack<int>& bucket) {
    int result=0;
    
    while (bucket.size() >= 4) {
        int nowBurger=0;
        
        for (int j=0; j<4; j++) {
            nowBurger *=10;
            nowBurger += bucket.top();
            bucket.pop();
        }
        
        if (nowBurger == 1321) {
            result++;
            continue;
        }
        
        for (int j=0; j<4; j++) {
            bucket.push(nowBurger%10);
            nowBurger /=10;
        }
        
        break;
    }
    
    return result;
}

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> bucket;
    
    for (int i=0; i<ingredient.size(); i++) {
        bucket.push(ingredient[i]);
        answer += checkBurger(bucket);
    }
    
    return answer;
}