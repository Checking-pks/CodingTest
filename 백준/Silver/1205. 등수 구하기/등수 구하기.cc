#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, S, P;
    cin >> N >> S >> P;
    
    if (N == 0)
    {
        cout << 1;
        return 0;
    }
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    int result = -1;
    
    for (int i = 0; i < N; i++)
    {
        if (nList[i] <= S)
        {
            result = i + 1;
            break;
        }
    }
    
    if (nList.back() == S && N == P)
        result = -1;
    
    if (nList.back() > S && N < P)
        result = N + 1;
    
    
    cout << result;
}