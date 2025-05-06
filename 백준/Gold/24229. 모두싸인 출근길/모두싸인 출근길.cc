#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<pair<int, int>> board(N), road(1);
    
    for (int i = 0; i < N; i++)
        cin >> board[i].first >> board[i].second;
    
    sort(board.begin(), board.end());
    
    for (int i = 0; i < N; i++)
    {
        if (road.back().second < board[i].first)
        {
            road.push_back(board[i]);
            continue;
        }
        
        road.back().second = max(road.back().second, board[i].second);
    }
    
    vector<bool> move(road.size());
    move[0] = true;
    
    for (int i = 0; i < road.size(); i++)
    {
        if (!move[i]) continue;
        
        int jump = road[i].second - road[i].first;
        
        for (int j = i + 1; j < road.size(); j++)
        {
            int dist = road[j].first - road[i].second;
            
            if (dist > jump) break;
            
            move[j] = true;
        }
    }
    
    for (int i = road.size() - 1; i >= 0; i--)
    {
        if (move[i])
        {
            cout << road[i].second;
            break;
        }
    }
}