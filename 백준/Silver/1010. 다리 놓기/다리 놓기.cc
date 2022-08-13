#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int n, m;
        unsigned long long result=1;
        cin >> n >> m;
        
        n = m-n;
        
        int list[n] = {0,};
        int div[n] = {0,};
        
        for (int j=0; j<n; j++) {
            list[j] = m-j;
            div[j] = j+1;
        }
        
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                if (list[k] % div[j] == 0 && list[k] != 0) {
                    list[k] /= div[j];
                    div[j] = 1;
                    break;
                }
            }
        } 
        
        for (int j=0; j<n; j++) {
            result *= list[j];
        }
        
        for (int j=0; j<n; j++) {
            result /= div[j];
        }
        
        cout << result << "\n";
    }
}
