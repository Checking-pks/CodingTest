#include <iostream>
using namespace std;

using int128 = __int128;

void printSign(int128 sum) {
    if (sum > 0) cout << "+" << '\n';
    else if (sum < 0) cout << "-" << '\n';
    else cout << "0" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int t = 0; t < 3; ++t) {
        int N;
        cin >> N;
        
        int128 sum = 0;
        for (int i = 0; i < N; ++i) {
            long long num;
            cin >> num;
            sum += static_cast<int128>(num);
        }
        
        printSign(sum);
    }
    
    return 0;
}