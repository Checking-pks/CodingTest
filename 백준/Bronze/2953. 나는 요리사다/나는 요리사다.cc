#include <iostream>

using namespace std;

int main() {
    int idx, max = 0;
    
    for (int i=0; i<5; i++) {
        for (int j=0, sum = 0, num; j<4; j++) {
            cin >> num;
            sum += num;
            
            if (max < sum) {
                idx = i + 1;
                max = sum;
            }
        }
    }
    
    cout << idx << " " << max;
}