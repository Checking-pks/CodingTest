#include <iostream>

using namespace std;

int main() {
    int limit, speed;
    cin >> limit >> speed;
    
    if (speed - limit >= 31)
        cout << "You are speeding and your fine is $500.";
    else if (speed - limit >= 21)
        cout << "You are speeding and your fine is $270.";
    else if (speed - limit >= 1)
        cout << "You are speeding and your fine is $100.";
    else
        cout << "Congratulations, you are within the speed limit!";
}