#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, mode=1, a=1, b=1;
    cin >> num;
    
    for (int i=1; i<num; i++) {
        if (i==1) {
            b++;
            mode++;
        } else if(mode*(mode+1)/2 == i) {
            if (a==1) {
                b++;
                mode++;
            } else if (b==1) {
                a++;
                mode++;
            }
        } else if (mode%2 == 0) {
            a++;
            b--;
        } else if (mode%2 == 1) {
            a--;
            b++;
        }
    }
    
    cout << a << "/" << b << "\n";
}