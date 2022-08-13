#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size_x, size_y, testcase;
    cin >> size_x >> size_y;
    
    int list[size_x][size_y];
    
    for (int i=0; i<size_x; i++) {
        for (int j=0; j<size_y; j++) {
            
            cin >> list[i][j];
            
        }
    }
    
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int x1,y1,x2,y2, sum=0;
        cin >> x1 >> y1 >> x2 >> y2;
        
        
        for (int j=x1; j<=x2; j++) {
            for (int k=y1; k<=y2; k++) {
                sum += list[j-1][k-1];
                
            }
        }
        
        cout << sum << "\n";
        
    }
    
    
}
