#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    
    a += (a&1);
    b += (b&1);
    
    while (a != b) {
        answer++;
        a = (a>>1);
        b = (b>>1);
        a += (a&1);
        b += (b&1);
    }

    return answer;
}