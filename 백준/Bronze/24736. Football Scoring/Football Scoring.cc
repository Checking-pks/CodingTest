#include <iostream>

using namespace std;

int main() {
    int t1Score = 0, t2Score = 0;
    int t, f, s, p, c;
    
    cin >> t >> f >> s >> p >> c;
    t1Score = t*6 + f*3 + s*2 + p + c*2;
    
    cin >> t >> f >> s >> p >> c;
    t2Score = t*6 + f*3 + s*2 + p + c*2;
    
    cout << t1Score << " " << t2Score;
}