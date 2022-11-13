#include <iostream>

using namespace std;

int main() {
    int max = 0;
    
    for (int i=0, now = 0, in, out; i<4; i++) {
        cin >> out >> in;
        now += in - out;
        if (max < now) max = now;
    }
    
    cout << max;
}