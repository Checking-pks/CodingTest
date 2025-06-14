#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int N;
map<string, int> name;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        name[S] = 0;
    }
    
    cin.ignore();
    
    for (int i = 0; i < N; i++)
    {
        string line;
        getline(cin, line);
        
        string now = "";
        for (int j = 0; j < line.length(); j++)
        {
            if (line[j] == ' ')
            {
                name[now]++;
                now = "";
                continue;
            }
            
            now += line[j];
        }
        
        name[now]++;
    }
    
    vector<pair<string, int>> result;
    for (auto now : name)
        result.push_back(now);
    
    sort(result.begin(), result.end(), cmp);
    
    for (int i = 0; i < N; i++)
        cout << result[i].first << " " << result[i].second << "\n";
}