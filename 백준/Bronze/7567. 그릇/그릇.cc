#include <iostream>
#include <string>

using namespace std;

int main() {
    int result = 0;
    string dish;
    char lastDish = ' ';
    cin >> dish;
    
    for (int i=0; i<dish.length(); i++) {
        result += ((dish[i] == lastDish) ? 5 : 10);
        lastDish = dish[i];
    }
    
    cout << result;
}