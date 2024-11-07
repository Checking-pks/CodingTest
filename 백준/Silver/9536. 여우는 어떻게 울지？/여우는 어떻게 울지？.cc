#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    string s;
    cin.ignore();
    getline(cin, s);
    s.push_back(' ');
    
    vector<string> cryingList;
    string now = "";
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cryingList.push_back(now);
            now = "";
            continue;
        }
        
        now += s[i];
    }
    
    string animal, goes, crying;
    cin >> animal >> goes >> crying;
    
    while (animal != "what")
    {
        for (int i=0; i<cryingList.size(); i++)
            if (cryingList[i] == crying) 
                cryingList[i] = "";
        
        cin >> animal >> goes >> crying;
    }
    
    cin >> goes >> crying;
    
    for (int i=0; i<cryingList.size(); i++)
    {
        if (cryingList[i] == "")
            continue;
        
        cout << cryingList[i] << " ";
    }
    
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        solve();
}