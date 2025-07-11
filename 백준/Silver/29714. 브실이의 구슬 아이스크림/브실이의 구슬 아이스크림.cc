#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    
    unordered_map<int, int> nList;
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        nList[now]++;
    }
    
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int a, b;
        cin >> a;
        
        bool isEat = true;
        unordered_map<int, int> aList;
        for (int j = 0, now; j < a; j++)
        {
            cin >> now;
            aList[now]++;
        }
        
        for (auto t : aList)
        {
            if (nList[t.first] < t.second)
            {
                isEat = false;
                break;
            }
        }
        
        if (isEat)
            for (auto t : aList)
                nList[t.first] -= t.second;
        
        cin >> b;
        for (int j = 0, now; j < b; j++)
        {
            cin >> now;
            if (isEat)
                nList[now]++;
        }
    }
    
    vector<int> result;
    for (auto t : nList)
        for (int i = 0; i < t.second; i++)
            result.push_back(t.first);
    
    cout << result.size() << "\n";
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}