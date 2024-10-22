#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class pos {
public:
    int x, y;
};

double getDist(pos a, pos b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main()
{
    int result = 60;
    pos yuumi;
    vector<pos> pList(3);
    
    cin >> yuumi.x >> yuumi.y;
    for (int i=0; i<3; i++)
        cin >> pList[i].x >> pList[i].y;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i == j) continue;
            
            for (int k=0; k<3; k++) {
                if (i == k || j == k) continue;
                
                double dist = 
                    getDist(yuumi, pList[i]) +
                    getDist(pList[i], pList[j]) +
                    getDist(pList[j], pList[k]);
                
                result = min(result, (int)dist);
            }
        }
    }
    
    cout << result;
}