#include <string>

using namespace std;

int countingOne(int n) {
    int result = 0;
    
    for (int i=1; i<=n; i<<=1) 
        result += (n&i ? 1 : 0);
    
    return result;
}

int solution(int n) {
    int oneCount = countingOne(n);
    
    for (int i=n+1; true; i++) 
        if (oneCount == countingOne(i)) 
            return i;
}