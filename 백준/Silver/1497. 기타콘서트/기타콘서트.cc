#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, resultSong = 0, resultGuitar = 0;
    cin >> N >> M;
    
    vector<string> nList(N);
    for (int i=0; i<N; i++) {
        string s;
        cin >> s >> nList[i];
    }
    
    for (int i=N; i>0; i--) {
        vector<bool> perList(N);
        for (int j=0; j<i; j++)
            perList[j] = true;
        
        do {
            int count = 0;
            vector<bool> song(M);
            
            for (int a = 0; a < N; a++) {
                if (!perList[a])
                    continue;
                
                for (int b = 0; b < M; b++) {
                    if (nList[a][b] == 'Y' && !song[b]) {
                        song[b] = true;
                        count++;
                    }
                }
            }
            
            if (resultSong <= count) {
                resultSong = count;
                resultGuitar = i;
            }
        } while (prev_permutation(perList.begin(), perList.end()));
    }
    
    cout << (resultSong ? resultGuitar : -1);
}