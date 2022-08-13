#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, times=0;
    cin >> n >> m;
    
    int a[n][m], b[n][m];
    
    //행렬 대입
    for (int i=0; i<n; i++) {
        string text;
        cin >> text;
        
        for (int j=0; j<text.length(); j++) {
            a[i][j] = text[j] - '0';
        }
    }
    
    for (int i=0; i<n; i++) {
        string text;
        cin >> text;
        
        for (int j=0; j<text.length(); j++) {
            b[i][j] = text[j] - '0';
        }
    }
    
    //맵 바꿈
    for (int i=0; i<=n-3; i++) {
        for (int j=0; j<=m-3; j++) {
            if (a[i][j] != b[i][j]) {
                for (int k=0; k<9; k++) {
                    if (a[i + k/3][j + k%3] == 0) {
                        a[i + k/3][j + k%3] = 1;
                    } else {
                        a[i + k/3][j + k%3] = 0;
                    }                 
                }
                times++;
            }
        }
    }
      
    // 마지막 체크
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] != b[i][j]) {
                cout << "-1";
                return 0;
            }
        }
    }
    
    cout << times;
    
}
