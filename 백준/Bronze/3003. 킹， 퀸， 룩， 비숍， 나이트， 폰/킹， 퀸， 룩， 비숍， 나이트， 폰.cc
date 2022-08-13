#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> blackPiece = {1, 1, 2, 2, 2, 8};
    vector <int> whitePiece = {0, 0, 0, 0, 0, 0};
    
    for (int i=0; i<whitePiece.size(); i++) 
        cin >> whitePiece[i];
    
    for (int i=0; i<whitePiece.size(); i++) 
        cout << blackPiece[i] - whitePiece[i] << " ";
    
    return 0;
}