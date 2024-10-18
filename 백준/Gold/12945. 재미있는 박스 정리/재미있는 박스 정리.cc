#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, box = 0;
    cin >> N;
    
    vector<int> nList(N);
    for (int i=0; i<N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    for (int i = (N >> 1) + (N & 1); i<N; i++)
        if (nList[box] * 2 <= nList[i])
            box++;
    
    cout << N - box;
}