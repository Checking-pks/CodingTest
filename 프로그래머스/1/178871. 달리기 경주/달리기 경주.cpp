#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;
    
    for (int i=0; i<players.size(); i++) 
        rank[players[i]] = i;
    
    for (int i=0; i<callings.size(); i++) {
        int nowRank = rank[callings[i]];
        int newRank = nowRank - 1;
        
        string nowPlayer = callings[i];
        string newPlayer = players[newRank];
        
        rank[nowPlayer] = newRank;
        rank[newPlayer] = nowRank;
        
        players[nowRank] = newPlayer;
        players[newRank] = nowPlayer;
    }
    
    return players;
}