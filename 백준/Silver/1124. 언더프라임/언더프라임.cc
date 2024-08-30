#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> primeList;

void getSieve(int m) {
    vector<bool> pList(m + 1);
    
    for (int i=2; i*i <= m; i++) 
        for (int j=i*i; !pList[i] && j <= m; j += i) 
            pList[j] = true;
            
    for (int i=2; i <= m; i++)
        if (!pList[i])
            primeList.insert(i);
}

int getCount(int n) {
    int count = 0;
    
    while (n > 1) {
        for (int p : primeList) {
            if (n % p == 0) {
                n /= p;
                count++;
                break;
            }
        }
    }
    
    return count;
}

int main() {
    int A, B, result = 0;
    cin >> A >> B;
    
    getSieve(B);
    
    for (int i=A; i<=B; i++) 
        if (primeList.find(getCount(i)) != primeList.end())
            result++;
    
    cout << result;
}