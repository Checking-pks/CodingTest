#include <iostream>

using namespace std;

int main() {
    int Soongsil, Korea, Hanyang;
    cin >> Soongsil >> Korea >> Hanyang;
    
    if (Soongsil + Korea + Hanyang >= 100)
        cout << "OK";
    else {
        int min = 100;
        string minUniv = "";
        
        if (min > Soongsil) {
            min = Soongsil;
            minUniv = "Soongsil";
        }
        
        if (min > Korea) {
            min = Korea;
            minUniv = "Korea";
        }
        
        if (min > Hanyang) {
            min = Hanyang;
            minUniv = "Hanyang";
        }
        
        cout << minUniv;
    }
}