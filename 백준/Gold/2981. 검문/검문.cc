#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    
    long long sum = 0;
    vector<int> nList(N);
    for (int i=0; i<N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    int result = nList[1] - nList[0];
    
    for (int i=2; i<N; i++) 
        result = gcd(result, nList[i] - nList[i-1]);
    
    vector<int> resultList(1, result);
    for (int i=2; i*i<=result; i++) {
        if (result % i == 0) {
            resultList.push_back(i);
            
            if (i != result / i)
                resultList.push_back(result / i);
        }
    }
    
    sort(resultList.begin(), resultList.end());
    
    for (int i=0; i<resultList.size(); i++)
        cout << resultList[i] << " ";
}