#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    if (num == 1) {
        cout << "*";
    } else {
       for (int i=1; i <= 2*num; i++) {
            if (i%2 == 1) {
                for (int j=1; j <= int((num-1)/2)+1; j++) { cout << "* ";} 
        } else if (i%2 == 0) {
                for (int j=1; j <= int(num/2); j++) {
                    cout << " *";
                }
            }
            cout << '\n';
    }
}
}