#include <iostream>

using namespace std;

int main() {
    int cash, amount;
    char type;
    
    while (cin >> cash >> type >> amount)
    {
        if (cash == 0 && type == 'W' && amount == 0)
            break;
        
        cash += amount * (type == 'D' ? 1 : -1);
        
        if (cash < - 200) cout << "Not allowed\n";
        else cout << cash << "\n";
    }
}
