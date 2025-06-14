#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    cout << (N > 100000 || N % 2024 ? "No" : "Yes");
}