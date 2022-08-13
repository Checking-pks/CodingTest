#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int list[500001] = {0,};
    
    int m, num, pos=1;
    unsigned long long sum=0, x=0;
    cin >> m;
    
    for (;m>0; m--) {
        int command;
        cin >> command;
        
        switch(command) {
            case 1:
                cin >> num;
    
                list[pos++] = num;
                sum += num;
                x ^= num;
                
                break;
            case 2:
                cin >> num;
    
                for (int i=1; i<pos; i++) {
                    if ((list[i] != 0)) {
                        if (list[i] == num) {
                            list[i] = 0;
                        }
                    }
                }
    
                sum -= num;
                x ^= num;
                
                break;
            case 3:
                cout << sum << "\n";
                break;
            case 4:
                cout << x << "\n";
                break;
        }
    }
}
