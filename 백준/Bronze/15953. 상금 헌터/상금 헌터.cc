#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
       
    int testcase;
    cin >> testcase;
    
    for (;testcase>0;testcase--) {
        int a, b, gold=0;
        cin >> a >> b;
        
        if (a<=0) {
            gold += 0;
        } else if (a<=1) {
            gold += 500;
        } else if (a<=3) {
            gold += 300;
        } else if (a<=6) {
            gold += 200;
        } else if (a<=10) {
            gold += 50;
        } else if (a<=15) {
            gold += 30;
        } else if (a<=21) {
            gold += 10;
        }
        
        if (b<=0) {
            gold += 0;
        } else if (b<=1) {
            gold += 512;
        } else if (b<=3) {
            gold += 256;
        } else if (b<=7) {
            gold += 128;
        } else if (b<=15) {
            gold += 64;
        } else if (b<=31) {
            gold += 32;
        } 
        
        if (gold >= 1) {
            cout << gold << "0000\n";
        } else {
            cout << "0\n";
        }
    }        
}
