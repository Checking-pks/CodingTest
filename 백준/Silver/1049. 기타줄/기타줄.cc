#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int broken_string, brands, package_price = 1000, piece_price=1000, price=0;
    cin >> broken_string >> brands;
    
    int brand_string_price[brands][2] = {0,};
    
    for (int i=0; i<brands; i++) {
        cin >> brand_string_price[i][0] >> brand_string_price[i][1];
        
        if (brand_string_price[i][0] < package_price) {
            package_price = brand_string_price[i][0];
        }
        
        if (brand_string_price[i][1] < piece_price) {
            piece_price = brand_string_price[i][1];
        }
    }
    
    if (package_price >= piece_price*6) {
        price = piece_price * broken_string;
    } else {
        price += (broken_string/6) * package_price;
        broken_string %= 6;
        
        if (broken_string * piece_price >= package_price) {
            price += package_price;
        } else {
            price += broken_string * piece_price;
        }
    }
    
    cout << price;
}
