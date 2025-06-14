#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, d, k, c, result = 0;
    cin >> N >> d >> k >> c;
    
    map<int, int> sushi;
    vector<int> nList(N);
    for (int i = 0, j = 0; i < nList.size(); i++)
    {
        if (i < N) cin >> nList[i];
        
        if (i < k) nList.push_back(nList[i]);
        
        sushi[nList[i]]++;
        
        if (i - j < k) continue;
        
        if (--sushi[nList[j++]] == 0)
            sushi.erase(nList[j - 1]);
        
        result = max(result, int(sushi.size()) + (sushi.find(c) == sushi.end()));
    }
    
    cout << max(result, int(sushi.size()) + (sushi.find(c) == sushi.end()));
}