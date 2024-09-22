#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<pair<int, int>> passenger(N);

int getResult(bool isMin) {
    int result = 0, check = passenger[0].second, notCheck = 0;
    for (int i = 1, out, nowOut, nowIn; i<N; i++) {
        nowOut = passenger[i].first;
        nowIn = passenger[i].second;
        
        if (isMin) {
            out = min(check, nowOut);
            
            check -= out;
            nowOut -= out;
            
            result += nowOut;
            notCheck -= nowOut;
        } else {
            out = min(notCheck, nowOut);
            
            notCheck -= out;
            nowOut -= out;
            
            result += out;
            check -= nowOut;
        }
        
        notCheck += nowIn;
        
        if (i % K == 0) {
            check += notCheck;
            notCheck = 0;
        }
    }
    
    return result;
}

int main()
{
    cin >> N >> K;
    
    passenger = vector<pair<int, int>>(N);
    for (int i=0; i<N; i++) 
        cin >> passenger[i].first >> passenger[i].second;
        
    cout << getResult(1) << " " << getResult(0);
}