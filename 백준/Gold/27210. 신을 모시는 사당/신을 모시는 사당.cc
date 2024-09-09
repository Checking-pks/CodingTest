#include <iostream>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    for (int i = 0, now, left = 0, right = 0; i<N; i++) {
        cin >> now;
        
        if (now == 1) {
            left++;
            if (right) right--;
        } else {
            right++;
            if (left) left--;
        }
        
        result = max(result, max(left, right));
    }
    
    cout << result;
}