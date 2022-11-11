#include <iostream>

using namespace std;

int main() {
    for (int i=0, total; i<3; i++) {
        bool a, b, c, d;
        cin >> a >> b >> c >> d;
        
        total = a + b + c + d;
        
        switch (total) {
            case 0:
                cout << "D\n";
                break;
            case 1:
                cout << "C\n";
                break;
            case 2:
                cout << "B\n";
                break;
            case 3:
                cout << "A\n";
                break;
            case 4:
                cout << "E\n";
                break;
        }
    }
}