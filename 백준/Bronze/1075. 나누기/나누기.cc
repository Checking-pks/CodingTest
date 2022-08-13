#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, div;

    cin >> num;
    cin >> div;

    num = (num/100)*100;

    while (num%div != 0) {
        num++;
    }

    if (num%100 < 10) {
        cout << "0" << num%100;
    } else {
        cout << num%100;
    }
}