#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    
    for(int i=1; i<=num; i++) {
        for(int j=0; j<num-i;j++) {
            cout << " ";
        }
        
        for(int j=0; j<i; j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
    
    for(int i=1; i<=num-1; i++) {
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        
        for(int j=0; j<num-i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    
}
