#include <iostream>

using namespace std;

int main() {
    int N, count = 0;
    string K;
    cin >> N >> K;
    
    for (int i=0; i<N; i++) {
        bool isOdd = (K[i] - '0') & 1;
        count += (isOdd ? 1 : -1);
    }
    
    if (!count)
        cout << -1;
    else
        cout << (count > 0);
}