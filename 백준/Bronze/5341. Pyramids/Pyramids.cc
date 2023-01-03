#include <iostream>

using namespace std;

int main() {
        int floor;
        cin >> floor;

        while (floor > 0) {
                cout << floor * (floor + 1) / 2 << "\n";
                cin >> floor;
        }
}