#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> nList(10);
    
    int N, rest = 0;
    cin >> N;

    for (int i = 1, now; N; i *= 10) 
    {
        now = N % 10;
        N /= 10;

        nList[0] -= i;
        
        for (int j = 0; j < now; j++) 
            nList[j] += (N + 1) * i;
        
        nList[now] += N * i + rest + 1;
        
        for(int j = now + 1; j <= 9; j++) 
            nList[j] += N * i;

        rest += now * i;
    }

    for (int i = 0; i < 10; i++) 
        cout << nList[i] << " ";
}