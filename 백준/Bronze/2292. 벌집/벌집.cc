#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, root=0;
    cin >> num;
    
    num--;
    
    for(int i=0; 3*(i*(i+1)) < num ;i++) {
        root++;
    }
    
    cout << root+1;
}