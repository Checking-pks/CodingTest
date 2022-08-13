#include <iostream>
#include <cmath>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int dot[2][2] = {0,}, star, result=0;
        
        cin >> dot[0][0] >> dot[0][1] >> dot[1][0] >> dot[1][1];
        cin >> star;
        
        for (int j=0; j<star; j++) {
            int x, y, r;
            cin >> x >> y >> r;
            
            if (pow(dot[0][0]-x,2)+pow(dot[0][1]-y,2) < pow(r,2) && pow(dot[1][0]-x,2)+pow(dot[1][1]-y,2) >= pow(r,2)) {
                result++;
            } else if (pow(dot[0][0]-x,2)+pow(dot[0][1]-y,2) >= pow(r,2) && pow(dot[1][0]-x,2)+pow(dot[1][1]-y,2) < pow(r,2)) {
                result++;
            }
        }
        
        cout << result << "\n";
    }
}
