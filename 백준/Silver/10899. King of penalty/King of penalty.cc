#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int P, N;
    cin >> P >> N;
    
    vector<int> nList(N);
    for (int i=0; i<N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    long long count = 0, score = 0;
    
    P--;
    for (int i=0; i<N; i++) {
        if (P - nList[i] < 0)
            break;
        
        count++;
        score += P;
        P -= nList[i];
    }
    
    cout << count << " " << score;
}