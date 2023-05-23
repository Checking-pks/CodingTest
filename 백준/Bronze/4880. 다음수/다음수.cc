#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    while (a != 0 || b != 0 || c != 0) {
		if (b-a == c-b) {
			cout << "AP " << c + c - b << "\n";	
		} else {
			cout << "GP " << c/b * c << "\n";
		}

		cin >> a >> b >> c;
    }
}