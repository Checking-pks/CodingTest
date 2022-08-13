#include <iostream>
using namespace std;


bool han_number(int t) {
    string number = to_string(t);
   
    if (int(number.length()) <= 2) {
        return true;
    } else if (int(number.length())%2 == 1) {
        for (int i=2; i < int(number.length()); i++) {
            int diff = number[1] - number[0];
            if (diff != number[i] - number[i-1]) {
                return false;
            } else if (i = int(number.length())) {
                return true;
            }
        }
    } else if (int(number.length())%2 == 0) {
        for (int i=2; i < int(number.length()); i++) {
            int diff = number[1] - number[0];
            if (diff != number[i] - number[i-1]) {
                return false;
            } else if (i = int(number.length())) {
                return true;
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string num;
    int list=0;
    cin >> num;
    for (int i=1; i <= stoi(num); i++ ) {
        if (han_number(i)) {
            list++;
        }
    }
    cout << list;
}
