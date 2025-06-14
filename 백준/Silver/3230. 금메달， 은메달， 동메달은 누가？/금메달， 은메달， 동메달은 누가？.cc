#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, now;
    cin >> N >> M;
    
    vector<int> g1(1), g2(1);
    
    for (int i = 1; i <= N; i++)
    {
        cin >> now;
        g1.insert(g1.begin() + now, i);
    }
    
    for (int i = M; i > 0; i--)
    {
        cin >> now;
        g2.insert(g2.begin() + now, g1[i]);
    }
    
    for (int i = 1; i <= 3; i++)
        cout << g2[i] << "\n";
}