#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int max, time;
    
    for (int i=1; i <= 9; i++) {
        int num;
        cin >> num;
        
        if (i == 1) {
            max = num;
            time = i;
        } else {
            if (max < num) {
                max = num;
                time = i;
            }
        }
    }
    cout << max << "\n" << time;
}