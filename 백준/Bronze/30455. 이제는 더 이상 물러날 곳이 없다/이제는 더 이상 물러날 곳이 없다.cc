#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << (N & 1 ? "Goose" : "Duck");
}