#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> nList(N, -1);
    string S;
    cin >> S;
    
    nList[0] = 0;
    for (int i=0; i<N; i++) {
        if (nList[i] == -1)
            continue;
        
        char target;
        if (S[i] == 'B') target = 'O';
        if (S[i] == 'O') target = 'J';
        if (S[i] == 'J') target = 'B';
        
        for (int j=i + 1; j<N; j++) {
            if (S[j] != target)
                continue;
            
            int value = nList[i] + (j - i) * (j - i);
            
            if (nList[j] == -1)
                nList[j] = value;
            
            nList[j] = min(nList[j], value);
        }
    }
    
    cout << nList[N - 1];
}