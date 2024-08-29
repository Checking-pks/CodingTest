#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    bool isBomb = false;
    vector<string> field(n), check(n);
    vector<pair<int, int>> checkList = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    
    for (int i=0; i<n; i++)
        cin >> field[i];
        
    for (int i=0; i<n; i++) {
        cin >> check[i];
        
        for (int j=0; j<n; j++) {
            if (check[i][j] != 'x')
                continue;
                
            if (field[i][j] == '*') {
                isBomb = true;
                continue;
            }
                
            char count = '0';
            
            for (int k=0; k<checkList.size(); k++) {
                int x = i + checkList[k].first;
                int y = j + checkList[k].second;
                
                if (x < 0 || x >= n) continue;
                if (y < 0 || y >= n) continue;
                
                if (field[x][y] == '*')
                    count++;
            }
            
            check[i][j] = count;
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; isBomb && j<n; j++) 
            if (field[i][j] == '*')
                check[i][j] = '*';
                
        cout << check[i] << "\n";
    }
}