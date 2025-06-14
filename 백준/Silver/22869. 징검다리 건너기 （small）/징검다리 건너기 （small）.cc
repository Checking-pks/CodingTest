#include <iostream>
#include <vector>

using namespace std;

int N, K;

vector<int> nList;
vector<bool> visit;

void simulate(int pos)
{
    if (visit.back()) return;
    if (visit[pos]) return;
    
    visit[pos] = true;
    
    for (int i = min(N - 1, pos + K), need; i > pos; i--)
    {
        need = (i - pos) * (1 + abs(nList[i] - nList[pos]));
        
        if (need <= K) simulate(i);
    }
}

int main()
{
    cin >> N >> K;
    
    nList.resize(N);
    visit.resize(N);
    
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    simulate(0);
    
    cout << (visit.back() ? "YES" : "NO");
}