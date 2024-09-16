#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> field;
vector<pair<int, int>> checkList = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

void check(int x, int y) {
    if (field[x][y] != '#')
        return;
        
    for (int i=0; i < checkList.size(); i++) {
        if(field[x + checkList[i].first][y + checkList[i].second] == '0') {
            field[x][y] = '-';
            return;
        }
    }
    
    field[x][y] = '.';
    
    for (int i=0; i < checkList.size(); i++) 
        if (field[x + checkList[i].first][y + checkList[i].second] > '0') 
            field[x + checkList[i].first][y + checkList[i].second]--;
}

int main()
{
    int N, result = 0;
    cin >> N;
    
    field = vector<string> (N);
    for (int i=0; i<N; i++)
        cin >> field[i];
        
    for (int i=1; i<N - 1; i++) {
        check(i, 1);
        check(i, N-2);
        check(1, i);
        check(N-2, i);
    }
    
    for (int i=0; i<N; i++) 
        for (int j=0; j<N; j++) 
            if (field[i][j] == '#' || field[i][j] == '.')
                result++;
                
    cout << result;
}