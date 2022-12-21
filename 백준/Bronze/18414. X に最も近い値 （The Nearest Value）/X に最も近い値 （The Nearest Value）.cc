#include <iostream>

using namespace std;

int main() {
    int num, min, max;
    cin >> num >> min >> max;
    
    if (num <= min)
        cout << min;
    else if (num >= max)
        cout << max;
    else
        cout << num;
}