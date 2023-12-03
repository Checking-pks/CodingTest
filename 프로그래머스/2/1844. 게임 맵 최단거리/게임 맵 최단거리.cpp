#include<vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int answer = -1;
    queue<pair<int,pair<int,int>>> q; // (cnt,y,x)
    bool visit[100][100];
    fill(&visit[0][0], &visit[99][100], false);
    
    if(maps[0][0]==1) {
        q.push(make_pair(1,make_pair(0,0)));
        visit[0][0]=true;
    }
    
    
    while(!q.empty()){
        int x, y, cnt;
        cnt = q.front().first;
        x = q.front().second.second;
        y = q.front().second.first;
        q.pop();
        
        if(x==maps[0].size()-1 && y==maps.size()-1) {
            answer=cnt;
            break;
        }
        
        if(y-1>=0 && maps[y-1][x]==1 && visit[y-1][x]==false) {
            q.push(make_pair(cnt+1,make_pair(y-1,x)));
            visit[y-1][x]=true;
        }
        if(y+1<=maps.size()-1&&maps[y+1][x]==1 && visit[y+1][x]==false) {
            q.push(make_pair(cnt+1,make_pair(y+1,x)));
            visit[y+1][x]=true;
        }
        if(x-1>=0&&maps[y][x-1]==1 && visit[y][x-1]==false) {
            q.push(make_pair(cnt+1,make_pair(y,x-1)));
            visit[y][x-1]=true;
        }
        if(x+1<=maps[0].size()&&maps[y][x+1]==1 && visit[y][x+1]==false) {
            q.push(make_pair(cnt+1,make_pair(y,x+1)));
            visit[y][x+1]=true;
        }
        
    }
    
    return answer;
}