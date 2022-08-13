#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase, fib_zero[41] = {1,0,1,}, fib_one[41]={0,1,1,};
    
    for (int i=3; i<=40; i++) {
        fib_zero[i] = fib_zero[i-1] + fib_zero[i-2];
        fib_one[i] = fib_one[i-1] + fib_one[i-2];
    }
    
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int num;
        cin >> num;
        cout << fib_zero[num] << " " << fib_one[num] << "\n";
    }
    
}
