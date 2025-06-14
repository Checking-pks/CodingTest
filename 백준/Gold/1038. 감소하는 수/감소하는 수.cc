#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> nList;

void simulate(int depth, int last_digit, long long num) 
{
    if (depth > 10) return;

    nList.push_back(num);

    for (int i = 0; i < last_digit; ++i) 
        simulate(depth + 1, i, num * 10 + i);
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 10; ++i) 
        simulate(1, i, i);

    sort(nList.begin(), nList.end());
    
    cout << (N < nList.size() ? nList[N] : -1);
}
