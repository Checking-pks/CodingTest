#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<string> nList(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nList[i];
        M -= nList[i].length();
    }
    
    cout << nList[0];
    
    for (int i = 1; i < N; i++)
    {
        cout << string(M / (N - 1), '_');
        
        if (M % (N - 1))
        {
            if ('a' <= nList[i][0] && nList[i][0] <= 'z')
            {
                cout << '_';
                M--;
            }
            else if (N - i <= M % (N - 1))
            {
                cout << '_';
                M--;
            }
        }
        
        cout << nList[i];
    }
}