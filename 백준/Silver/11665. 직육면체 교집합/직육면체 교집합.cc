#include <iostream>

using namespace std;

class pos {
public:
    int x, y, z;
};

int main()
{
    int N;
    cin >> N;
    
    pos p1, p2;
    cin >> p1.x >> p1.y >> p1.z
        >> p2.x >> p2.y >> p2.z;
    
    for (int i=1; i<N; i++) {
        pos now1, now2;
        cin >> now1.x >> now1.y >> now1.z
            >> now2.x >> now2.y >> now2.z;
        
        p1.x = max(p1.x, now1.x);
        p1.y = max(p1.y, now1.y);
        p1.z = max(p1.z, now1.z);
        
        p2.x = min(p2.x, now2.x);
        p2.y = min(p2.y, now2.y);
        p2.z = min(p2.z, now2.z);
    }
    
    if (p2.x < p1.x || p2.y < p1.y || p2.z < p1.z) {
        cout << 0;
        return 0;
    }
    
    cout << (p2.x - p1.x) * (p2.y - p1.y) * (p2.z - p1.z);
}