#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

const int DIVISION = 1234567;
unordered_map<int, int> numList;

long long dp(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (numList.find(n) != numList.end()) return numList[n];
    
    int now = dp(n-1) + dp(n-2);
    now %= DIVISION;
    numList[n] = now;
    return now;
}

long long solution(int n) {
    return dp(n);
}