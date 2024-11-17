#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

set<string> typeList;

class file
{
public:
    string name;
    string type;
};

bool cmp(file a, file b)
{
    if (a.name != b.name)
        return a.name < b.name;
    
    if (typeList.find(a.type) != typeList.end() &&
        typeList.find(b.type) == typeList.end())
        return true;
    
    if (typeList.find(a.type) == typeList.end() &&
        typeList.find(b.type) != typeList.end())
        return false;
    
    return a.type < b.type;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<file> files(N);
    for (int i=0; i<N; i++)
    {
        string now;
        cin >> now;
        
        int dotPos = now.find('.');
        
        files[i].name = now.substr(0, dotPos);
        files[i].type = now.substr(dotPos + 1);
    }
    
    for (int i=0; i<M; i++)
    {
        string now;
        cin >> now;
        
        typeList.insert(now);
    }
    
    sort(files.begin(), files.end(), cmp);
    
    for (int i=0; i<N; i++)
        cout << files[i].name + "." + files[i].type << "\n";
}