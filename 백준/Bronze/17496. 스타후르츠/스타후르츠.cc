#include <iostream>

using namespace std;

int main() {
    int day, growTime, plantNum, price;
    cin >> day >> growTime >> plantNum >> price;
    cout << --day / growTime * plantNum * price;
}