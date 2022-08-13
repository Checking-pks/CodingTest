#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string chess;
    int white=0;
    
    for (int i=0; i<8; i++) {
        cin >> chess;  
        for (int j=0; j<8; j++) {
            if (chess[j] == 'F') {
                if ((i==0) || (i%2 == 0)) {
                    if ((j==0) || (j%2 == 0)) {
                        white++;
                    }
                } else if (i%2 == 1) {
                    if (j%2 == 1) {
                        white++;
                    }
                }
            } 
        }
    }
    
    cout << white;
    
}