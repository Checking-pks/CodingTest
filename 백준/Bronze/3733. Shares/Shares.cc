#include <iostream>

using namespace std;

int main() {
    int num, stock;
    while (cin >> num >> stock) 
        cout << stock / ++num << "\n";
    
    return 0;
}