#include <iostream>

using namespace std;

int main() {
    int time, alcohol;
    cin >> time >> alcohol;
    
    if (12 <= time && time <= 16 && alcohol == 0) cout << "320";
    else cout << "280";
}