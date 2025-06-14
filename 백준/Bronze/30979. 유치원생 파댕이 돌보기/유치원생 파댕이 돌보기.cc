#include <iostream>

using namespace std;

int main() {
    int T, N, sum = 0;
    cin >> T >> N;
    
    for (int i=0, now; i<N; i++) {
        cin >> now;
        sum += now;
    }
    
    cout << "Padaeng_i " << (T > sum ? "Cry" : "Happy");
}