#include <iostream>
#include <vector>

using namespace std;

bool isCheck(int x, int y, int a, int b) {
    if (x == a) return true;
    if (y == b) return true;
    
    if (abs(x - a) == abs(y - b))
        return true;
        
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, K, x, y;
    cin >> N >> K;
    
    vector<vector<bool>> field(3, vector<bool> (3));
    cin >> x >> y;
    
    for (int i=0, a, b; i<K; i++) {
        cin >> a >> b;
        
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++) {
                if (N < x + j - 1 || x + j - 1 < 1)
                    field[j][k] = true;
                if (N < y + k - 1 || y + k - 1 < 1)
                    field[j][k] = true;
                if (field[j][k]) continue;
                
                field[j][k] = isCheck(x + j - 1, y + k - 1, a, b);
            }
        }
    }
    
    if (field == vector<vector<bool>>{{1, 1, 1}, {1, 1, 1}, {1, 1, 1}})
        cout << "CHECKMATE";
    else if (field == vector<vector<bool>>{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}})
        cout << "STALEMATE";
    else if (field[1][1])
        cout << "CHECK";
    else
        cout << "NONE";
}