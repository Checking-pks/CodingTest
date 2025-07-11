#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    map<string, double> price;
    string s;
    double p;
    int count = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> s >> p;
        price[s] = p;
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> s >> p;
        count += (price[s] * 1.05 < p);
    }
    
    cout << count;
}