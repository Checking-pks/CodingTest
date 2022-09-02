#include <iostream>

using namespace std;

int main() {
    int sum, diff;
    int t1, t2;
    cin >> sum >> diff;
    
    t1 = sum + diff;
    t2 = sum - diff;
    
    if (t1 % 2 == 0 && t2 % 2 == 0 && t1 >= 0 && t2 >= 0) 
        cout << (t1 >> 1) << " " << (t2 >> 1);
    else 
        cout << -1;
}