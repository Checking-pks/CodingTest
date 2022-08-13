#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int multitap, plug, sum=1;
    cin >> multitap;
    
    for (int i=0; i<multitap; i++) {
        cin >> plug;
        sum += plug-1;
    }
    
    cout << sum;
}
