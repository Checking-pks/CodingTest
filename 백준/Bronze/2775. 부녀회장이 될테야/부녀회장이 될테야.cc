#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase, k, n;
    
    cin >> testcase;
    
    for(int i=0; i<testcase; i++) {
        cin >> k;
        cin >> n;
        
        k++;
        n++;
        
        //k*n tower
        int room[k][n];
        
        //zero floor all room clear
        for(int x=0; x<n; x++) {
            room[0][x]=x;
        }
        
        //all floor first room clear
        for(int x=0; x<k; x++) {
            room[x][0]=0;
            room[x][1]=1;
        }
        
        //first floor ~
        for(int x=1; x<k; x++) {
            for (int y=1; y<n; y++) {
                room[x][y]=room[x][y-1]+room[x-1][y];
            }
        }
        
        cout << room[k-1][n-1] << "\n";
    }
}