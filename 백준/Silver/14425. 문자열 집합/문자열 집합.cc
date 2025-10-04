#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    int count = 0;
    unordered_set<string> strList;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        strList.insert(s);
    }
    
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        
        if (strList.find(s) != strList.end())
            count++;
    }
    
    cout << count;
}