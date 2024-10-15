#include <iostream>
#include <vector>

using namespace std;

int getDist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
    int N, result;
    cin >> N;
    
    vector<pair<int, int>> pos(N);
    for (int i=0; i<N; i++)
        cin >> pos[i].first >> pos[i].second;
    
    result = getDist(pos.front(), pos.back());
    for (int i=1; i<N; i++)
        result += getDist(pos[i], pos[i - 1]);
    
    cout << result;
}