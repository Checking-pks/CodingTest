#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, l=1;
    cin >> n >> m;
    int field[n][m] = {0,};
    
    for (int i=0; i<n; i++) {
        string line;
        cin >> line;
        for (int j=0; j<m; j++) {
            field[i][j] = line[j] - '0';
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (int k=j; k<m; k++) {
                if (field[i][j] == field[i][k]) {
                    if (i+k-j >= n) {
                        break;
                    } else if (field[i][j] == field[i+k-j][j] && field[i][j] == field[i+k-j][k]) {
                        if (k-j+1 > l) {
                            l = k-j+1;
                        }
                    }
                }
            }
        }
    }
    
    cout << l*l;
}
