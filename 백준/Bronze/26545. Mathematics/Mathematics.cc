#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    
    for (int i=0, n; i<num; i++) {
        cin >> n;
        sum += n;
    }
    
    cout << sum;
}