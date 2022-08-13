#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size, num=0;
    string two;
    cin >> size;
    
    for (;size>=1; size /=2) {
        if (size % 2 == 1) {
            two = '1' + two;
        } else {
            two = '0' + two;
        }
    }
    
    for (int i=0; i<two.length(); i++) {
        if (two[i] == '1') {
            num++;
        }
    }
    
    cout << num;
    
}
