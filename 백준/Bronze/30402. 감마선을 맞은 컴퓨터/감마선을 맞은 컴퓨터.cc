#include <iostream>

using namespace std;

int main() {
    bool chunbae = false, nabi = false, yeongcheol = false;
    
    for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            char c;
            cin >> c;
            
            if (c == 'w') chunbae = true;
            if (c == 'b') nabi = true;
            if (c == 'g') yeongcheol = true;
        }
    }
    
    if (chunbae) cout << "chunbae";
    if (nabi) cout << "nabi";
    if (yeongcheol) cout << "yeongcheol";
}