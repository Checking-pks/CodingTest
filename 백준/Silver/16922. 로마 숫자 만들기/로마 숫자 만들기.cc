#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<set<int>> nList(21);

void simulate(int d, int n)
{
    if (nList[d].find(n) != nList[d].end())
        return;

    nList[d].insert(n);
    
    if (!d) return;
    
    simulate(d - 1, n + 1);
    simulate(d - 1, n + 5);
    simulate(d - 1, n + 10);
    simulate(d - 1, n + 50);
}

int main()
{
    int N;
    cin >> N;
    
    simulate(N, 0);
    
    cout << nList[0].size();
}