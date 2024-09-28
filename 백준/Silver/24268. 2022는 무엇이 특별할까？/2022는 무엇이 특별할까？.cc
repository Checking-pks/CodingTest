#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    int N, d, result = -1;
    cin >> N >> d;
    
    string s(d, '0');
    for (int i=0; i<d; i++)
        s[i] += i;
    
    do {
        if (s[0] == '0') continue;
        
        int now = 0;
        
        for (int i=d-1, num = 1; i >= 0; i--, num *= d) 
            now += (s[i] - '0') * num;
        
        if (now > N) {
            result = now;
            break;
        }
    } while (next_permutation(s.begin(), s.end()));
    
    cout << result;
}