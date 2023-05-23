#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    while (a + b + c) {
		int longestSide = max(a,max(b,c));
		
		if (longestSide >= a+b+c-longestSide)
			cout << "Invalid\n";
        else if (a == b && b == c)
            cout << "Equilateral\n";
        else if (a != b && b != c && a != c)
            cout << "Scalene\n";
        else
            cout << "Isosceles\n";
        
        cin >> a >> b >> c;
    }
}