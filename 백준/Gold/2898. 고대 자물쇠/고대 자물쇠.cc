#include <iostream>
#include <vector>
#include <set>

#define groove pair<int, int>

using namespace std;

int W, L, N, keyCount = 0;
set<vector<groove>> keySet;

void getKey()
{
    vector<groove> key1(L), key2(L), key3(L), key4(L);
    vector<int> topGroove(L), bottomGroove(L);
    int minTopGrooveSize = W, minBottomGrooveSize = W;
    
    for (int i = 0; i < L; i++)
    {
        cin >> topGroove[i];
        minTopGrooveSize = min(minTopGrooveSize, topGroove[i]);
    }
    
    for (int i = 0; i < L; i++)
    {
        cin >> bottomGroove[i];
        minBottomGrooveSize = min(minBottomGrooveSize, bottomGroove[i]);
    }
    
    for (int i = 0, topStart, bottomStart, size; i < L; i++)
    {
        topStart = topGroove[i] - minTopGrooveSize;
        bottomStart = bottomGroove[i] - minBottomGrooveSize;
        size = W - topGroove[i] - bottomGroove[i];
        
        key1[i]         = {topStart, size};
        key2[L - i - 1] = {topStart, size};
        key3[i]         = {bottomStart, size};
        key4[L - i - 1] = {bottomStart, size};
    }
    
    if (keySet.find(key1) == keySet.end() ||
        keySet.find(key2) == keySet.end() ||
        keySet.find(key3) == keySet.end() ||
        keySet.find(key4) == keySet.end())
    {
        keySet.insert(key1);
        keySet.insert(key2);
        keySet.insert(key3);
        keySet.insert(key4);
        
        keyCount++;
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> W >> L >> N;
    
    for (int i = 0; i < N; i++)
        getKey();
    
    cout << keyCount;
}