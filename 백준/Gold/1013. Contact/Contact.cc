#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (; 0<testcase; testcase--) {
        int version=0;
        string num;
        cin >> num;
        
        if (num[0] == '1') {
            version = 1;
        } else {
            version = 7;
        }
        
        for (int i=1; i<num.length(); i++) {
            
            //cout << i << "/" << version << "\n";
            
            if (version == 0) {
                break;
            }
            
            switch (version) {
                case 1:
                    if (num[i] == '0') {
                        version = 2;
                    } else {
                        version = 0;
                    }
                    break;
                case 2:
                    if (num[i] == '0') {
                        version = 3;
                    } else {
                        version = 0;
                    }
                    break;
                case 3:
                    if (num[i] == '0') {
                        version = 4;
                    } else {
                        version = 5;
                    }
                    break;
                case 4:
                    if (num[i] == '0') {
                        version = 4;
                    } else {
                        version = 5;
                    }
                    break;
                case 5:
                    if (num[i] == '0') {
                        version = 7;
                    } else {
                        version = 6;
                    }
                    break;
                case 6:
                    if (num[i] == '1') {
                        version = 6;
                    } else {
                        if (num[i+1] == '0') {
                            version = 2;
                        } else {
                            version = 7;
                        }
                    }
                    break;
                case 7:
                    if (num[i] == '1') {
                        version = 8;
                    } else {
                        version = 0;
                    }
                    break;
                case 8:
                    if (num[i] == '1') {
                        version = 1;
                    } else {
                        version = 7;
                    }
                    break;
            }
        }
        
        //cout << version << "\n";
        
        if (version == 5 || version == 6 || version == 8) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}
