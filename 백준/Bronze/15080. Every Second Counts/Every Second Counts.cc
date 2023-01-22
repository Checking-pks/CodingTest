#include <iostream>

using namespace std;

int main() {
    int t1, t2;
    int h1, m1, s1, h2, m2, s2;
    char colon;
    
    cin >> h1 >> colon >> m1 >> colon >> s1;
    cin >> h2 >> colon >> m2 >> colon >> s2;
    
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    
    cout << t2 - t1 + ((t1 > t2) ? 86400 : 0);
}