#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0, people; i<testcase; i++) {
        long long sum = 0;
        
        cin >> people;
        for (int j=0; j<people; j++) {
            long long n;
            cin >> n;
            sum += n;
            sum %= people;
        }
        
        cout << (sum == 0 ? "YES\n":"NO\n");
    }
}