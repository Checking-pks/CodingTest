#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    vector<int> nList(N);
    cin >> nList[0];
    
    for (int i = 1, now; i < N; i++)
    {
        cin >> now;
        nList[i] = nList[i - 1] + now;
    }
    
    for (int i = 0, j = 0; i < N; i++)
    {
        int a = nList[i] - nList[j];
        int b = nList.back() - a;
        
        result = max(result, min(a, b));
            
        while (a > b)
        {
            j++;
            
            a = nList[i] - nList[j];
            b = nList.back() - a;
            
            result = max(result, min(a, b));
        }
    }
    
    cout << result;
}