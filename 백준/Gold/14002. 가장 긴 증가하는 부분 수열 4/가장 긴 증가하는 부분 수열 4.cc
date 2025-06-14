#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> nList(N);
    vector<pair<int, int>> stack(N, {1, 0});
    for (int i=0; i<N; i++)
        cin >> nList[i];
    
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (nList[i] >= nList[j])
                continue;
            
            if (stack[j].first >= stack[i].first + 1)
                continue;
            
            stack[j] = {stack[i].first + 1, i};
        }
    }
    
    int maxSize = 0, maxPos = 0;
    vector<int> result;
    
    for (int i=0; i<N; i++) {
        if (maxSize < stack[i].first) {
            maxSize = stack[i].first;
            maxPos = i;
        }
    }
    
    while (maxSize--) {
        result.push_back(nList[maxPos]);
        maxPos = stack[maxPos].second;
    }
    
    cout << result.size() << "\n";
    while (result.size()) {
        cout << result.back() << " ";
        result.pop_back();
    }
}