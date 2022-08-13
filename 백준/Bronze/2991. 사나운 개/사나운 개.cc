#include <iostream>
using namespace std;

int attack(int bark, int rest, int who) {
    int times = (who % (bark + rest));
    
    if (times == 0) {
        return 0;
    } 
    
    if (0 < times && times <= bark) {
        return 1;
    } 
    
    if (bark < times <= bark + rest) {
        return 0;
    }
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a_bark, a_rest, b_bark, b_rest;
    int post, milk, news;
    
    cin >> a_bark >> a_rest >> b_bark >> b_rest;
    cin >> post >> milk >> news;
    
    cout << attack(a_bark, a_rest, post) + attack(b_bark, b_rest, post) << "\n";
    cout << attack(a_bark, a_rest, milk) + attack(b_bark, b_rest, milk) << "\n";
    cout << attack(a_bark, a_rest, news) + attack(b_bark, b_rest, news) << "\n";
}
