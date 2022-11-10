#include <iostream>

using namespace std;

int main() {
    int n = 1, floor;
    cin >> floor;
    
    for (int i=0; i<floor; i++) 
        n *= 2;
    
    cout << n;
}