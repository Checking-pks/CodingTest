#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string king, stone;
    int times;
    
    cin >> king >> stone >> times;
    
    for (int i=0; i<times; i++) {
        string command;
        int command_number=0;
        cin >> command;
        
        if (command == "R") {
            command_number=1;
        } else if (command == "L") {
            command_number=2;
        } else if (command == "B") {
            command_number=3;
        } else if (command == "T") {
            command_number=4;
        } else if (command == "RT") {
            command_number=5;
        } else if (command == "LT") {
            command_number=6;
        } else if (command == "RB") {
            command_number=7;
        } else if (command == "LB") {
            command_number=8;
        }
        
        switch (command_number) {
            case 1:
                if (king[0] != 'H') {
                    king[0]++;
                    if (king == stone) {
                        if (stone[0] == 'H') {
                            king[0]--;
                        } else {
                            stone[0]++;
                        }
                    }
                }
                break;
            case 2:
                if (king[0] != 'A') {
                    king[0]--;
                    if (king == stone) {
                        if (stone[0] == 'A') {
                            king[0]++;
                        } else {
                            stone[0]--;
                        }
                    }
                }
                break;
            case 3:
                if (king[1] != '1') {
                    king[1]--;
                    if (king == stone) {
                        if (stone[1] == '1') {
                            king[1]++;
                        } else {
                            stone[1]--;
                        }
                    }
                }
                break;
            case 4:
                if (king[1] != '8') {
                    king[1]++;
                    if (king == stone) {
                        if (stone[1] == '8') {
                            king[1]--;
                        } else {
                            stone[1]++;
                        }
                    }
                }
                break;
            case 5:
                if (king[0] != 'H' && king[1] != '8') {
                    king[0]++;
                    king[1]++;
                    if (king == stone) {
                        if (stone[0] == 'H' || stone[1] == '8') {
                            king[0]--;
                            king[1]--;
                        } else {
                            stone[0]++;
                            stone[1]++;
                        }
                    }
                }
                break;
            case 6:
                if (king[0] != 'A' && king[1] != '8') {
                    king[0]--;
                    king[1]++;
                    if (king == stone) {
                        if (stone[0] == 'A' || stone[1] == '8') {
                            king[0]++;
                            king[1]--;
                        } else {
                            stone[0]--;
                            stone[1]++;
                        }
                    }
                }
                break;
            case 7:
                if (king[0] != 'H' && king[1] != '1') {
                    king[0]++;
                    king[1]--;
                    if (king == stone) {
                        if (stone[0] == 'H' || stone[1] == '1') {
                            king[0]--;
                            king[1]++;
                        } else {
                            stone[0]++;
                            stone[1]--;
                        }
                    }
                }
                break;
            case 8:
                if (king[0] != 'A' && king[1] != '1') {
                    king[0]--;
                    king[1]--;
                    if (king == stone) {
                        if (stone[0] == 'A' || stone[1] == '1') {
                            king[0]++;
                            king[1]++;
                        } else {
                            stone[0]--;
                            stone[1]--;
                        }
                    }
                }
                break;
        }
    }
    
    cout << king << "\n" << stone;
    
}
