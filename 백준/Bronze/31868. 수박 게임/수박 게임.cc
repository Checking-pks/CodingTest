#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    cout << (K >> (N - 1));
}