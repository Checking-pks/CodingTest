#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, total=0;
    string list;
    
    cin >> num;
    cin >> list;
    
    for (int i=0; i < num; i++) {
        total += list[i] -'0';
    }
    cout << total;
}
