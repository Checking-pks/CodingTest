#include <iostream>
#include <vector>

using namespace std;

vector<int> primeList;

void getPrimeList(int N) {
    vector<bool> nList(N + 1);
    
    for (int i=2; i*i<=N; i++) {
        if (nList[i])
            continue;
        
        for (int j=i*i; j<=N; j+=i)
            nList[j] = true;
    }
    
    for (int i=2; i<=N; i++)
        if (!nList[i])
            primeList.push_back(i);
}

int main()
{
    int N, B = 0, S = 1;
    cin >> N;
    
    if (N == 1) {
        cout << "1 0";
        return 0;
    }
    
    if (N == 2) {
        cout << "0 2";
        return 0;
    }
    
    getPrimeList(N);
    
    for (int i=1; i<primeList.size(); i++) {
        S += 2;
        if (primeList[i] - primeList[i - 1] > 2) 
            B += primeList[i] - primeList[i - 1] - 2;
    }
    
    B += N - primeList.back();
    
    cout << B << " " << S;
}