#include <iostream>
#include <string>
using namespace std;

int self_number(int a) {
    string number;
    number = to_string(a);
    int num=0;
    for (int i=0; i<int(number.length()); i++) {
        num += number[i] - '0';
        }
    num += a;
    
    return num;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int list[10001];
    for (int i=0; i<10001; i++) {
        list[i] = i;
    }
    
    for (int j=0; j<10001; j++) {
        if (self_number(j) <= 10000) {
            list[self_number(j)] = 0;
            }
    }
    
    for (int k=0; k < 10001; k++) {
        if (list[k] != 0) {
            cout << list[k] << "\n";
        }
    }
}
