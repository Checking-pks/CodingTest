#include <iostream>
#include <vector>

using namespace std;

vector<int> nList, posList;

void swapList(int start, int end)
{
    for (int i = 0, a, b; i * 2 <= end - start; i++)
    {
        a = start + i;
        b = end - i;
        
        swap(posList[nList[a]], posList[nList[b]]);
        swap(nList[a], nList[b]);
    }
}

int main()
{
    int N;
    cin >> N;
    
    nList = posList = vector<int>(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> nList[i];
        posList[--nList[i]] = i;
    }
    
    vector<pair<int, int>> result;
    for (int i = 0; i < N; i++)
    {
        if (nList[i] == i) 
            continue;
        
        result.push_back({i + 1, posList[i] + 1});
        
        swapList(i, posList[i]);
    }
    
    cout << result.size();
    for (int i = 0; i < result.size(); i++)
        cout << "\n" << result[i].first << " " << result[i].second;
}