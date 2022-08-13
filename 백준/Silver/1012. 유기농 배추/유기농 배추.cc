#include <iostream>
using namespace std;

bool field[52][52] = {false,};

void find_island(int x, int y) {
    field[x][y] = false;

    if (field[x][y-1]) {
        find_island(x, y-1);
    }
    
    if (field[x][y+1]) {
        find_island(x, y+1);
    }
    
    if (field[x-1][y]) {
        find_island(x-1, y);
    }
    
    if (field[x+1][y]) {
        find_island(x+1, y);
    }
}

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int m, n, cabbage, result=0;
        cin >> m >> n >> cabbage;
        
        for (int j=0; j<cabbage; j++) {
            int x, y;
            cin >> x >> y;
            
            x++;
            y++;
            
            field[x][y] = true;
        }
        
        for (int j=0; j<52; j++) {
            for (int k=0; k<52; k++) {
                if (field[j][k]) {
                    result++;
                    find_island(j, k);
                }
            }
        }
        
        cout << result << "\n";
    }
}
