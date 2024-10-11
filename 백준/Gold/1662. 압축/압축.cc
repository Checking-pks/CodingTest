#include <iostream>

using namespace std;

string S;
int pos = -1;

int solve(int mul) {
    int result = 0;
    
    for (++pos; pos<S.length(); pos++) {
        if (S[pos] == '(') continue;
        if (S[pos] == ')') break;
        
        if (S[pos + 1] == '(')
            result += solve(S[pos] - '0');
        else
            result++;
    }
    
    return mul * result;
}

int main()
{
    cin >> S;
    cout << solve(1);
}