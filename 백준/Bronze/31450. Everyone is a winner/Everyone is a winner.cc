#include <iostream>

using namespace std;

int main() {
    int M, K;
    cin >> M >> K;
    
    cout << (M%K ? "No" : "Yes");
}