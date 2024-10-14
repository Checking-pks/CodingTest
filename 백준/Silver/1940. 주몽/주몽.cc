#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, M, result = 0;
    cin >> N >> M;
    
    set<int> nList;
    for (int i=0, now; i<N; i++) {
        cin >> now;
        nList.insert(now);
    }
    
    for (int n : nList) {
        if (n * 2 == M)
            continue;
        
        if (nList.find(M - n) == nList.end())
            continue;
        
        result++;
    }
    
    cout << result / 2;
}