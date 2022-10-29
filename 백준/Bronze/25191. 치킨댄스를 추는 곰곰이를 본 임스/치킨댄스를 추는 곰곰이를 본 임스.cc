#include <iostream>

using namespace std;

int main() {
    int chicken, coke, beer;
    cin >> chicken >> coke >> beer;
    
    int canEatting = (coke >> 1) + beer;
    
    cout << ((chicken < canEatting) ? chicken : canEatting);
}