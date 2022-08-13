#include <iostream>

using namespace std;

int main() {
    int up, down, height;
    double days;
    cin >> up >> down >> height;

    days = double (height - down) / (up - down);

    cout << int(days) + ((int(days) != days) ? 1 : 0);
    
    return 0;
}