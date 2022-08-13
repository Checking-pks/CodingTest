#include <iostream>
using namespace std;

int chicken_delivery(int chicken, int coupon, int have) {
    have = chicken + have%coupon;
    
    if (have/coupon >= 1) {
        return chicken + chicken_delivery(int(have/coupon), coupon, have);
    } else {
        return chicken;
    }
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int chicken, coupon, have=0;
    
    while (cin >> chicken >> coupon) {
        cout << chicken_delivery(chicken, coupon, have) << "\n";
    }
}
