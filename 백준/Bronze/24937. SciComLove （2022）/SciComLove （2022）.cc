#include <iostream>

using namespace std;

int main()
{
    string S = "SciComLove";
    int N;
    
    cin >> N;
    cout << S.substr(N % 10) + S.substr(0, N % 10);
}