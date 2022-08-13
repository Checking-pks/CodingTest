#include <iostream>
using namespace std;

int lowhambuger(int a, int b, int c) {
    if ((a <= b) && (b <= c)) {
        return a;
    } else if ((b <= a) && (b <= c)) {
        return b;
    } else {
        return c;
    }
}

int lowsoda(int a, int b) {
    if (a <= b) {
        return a;
    } else {return b;}
}

int main() {
    int top, mid, bottom;
    int coke, soda;
    
    cin >> top;
    cin >> mid;
    cin >> bottom;
    cin >> coke;
    cin >> soda;
    
    cout << lowhambuger(top, mid, bottom) + lowsoda(coke,soda) - 50;  
}
