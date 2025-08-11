#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];
    
    int result = abs(a[N - 1] + b[N - 2] - a[N - 2] - b[N - 1]);
    
    for (int i = 0; i < N - 2; i++)
        result += abs(a[i] - b[i]);
    
    cout << result;
}