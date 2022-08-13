#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t,h,w,n,num;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> h >> w >> n;
        if (n%h!=0) {
            num=(n%h*100)+int(n/h)+1;
            cout<<num<<"\n";
        } else {
            num=h*100+int(n/h);
            cout<<num<<"\n";
        }
    }
}