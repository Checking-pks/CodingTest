#include <iostream>

using namespace std;

int main() {
    int UR, TR, UO, TO;
    cin >> UR >> TR >> UO >> TO;
    
    cout << UR * 56 + TR * 24 + UO * 14 + TO * 6;
}