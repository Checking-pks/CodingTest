#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> cantMove = {
    {}, 
    {{3, 2}, {7, 4}, {9, 5}}, 
    {{8, 5}}, 
    {{1, 2}, {7, 5}, {9, 6}}, 
    {{6, 5}}, 
    {}, 
    {{4, 5}}, 
    {{1, 4}, {3, 5}, {9, 8}}, 
    {{2, 5}}, 
    {{1, 5}, {3, 6}, {7, 8}}
};

bool simulate() {
    int L, pos;
    cin >> L >> pos;
    
    vector<bool> visit(10);
    visit[pos] = true;
    
    for (int i=1, now; i<L; i++) {
        cin >> now;
        
        if (visit[now]) return false;
        visit[now] = true;
        
        for (int j=0; j<cantMove[pos].size(); j++) 
            if (cantMove[pos][j][0] == now && !visit[cantMove[pos][j][1]])
                return false;
        
        pos = now;
    }
    
    return true;
}

int main()
{
    cout << (simulate() ? "YES" : "NO");
}