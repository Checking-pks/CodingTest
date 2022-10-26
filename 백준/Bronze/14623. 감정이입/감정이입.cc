#include <iostream>
#include <string>

using namespace std;

int main() {
	// variable
    string b1, b2, b_result = "";
    long long n1 = 0, n2 = 0, n_result = 0;

	// input
    cin >> b1 >> b2;

	// binary1 to number1
    for (int i=1; b1.size(); i *= 2) {
        if (b1.back() - '0') 
			n1 += i;
        b1.pop_back();
    }

	// binary2 to number2
    for (int i=1; b2.size(); i *= 2) {
        if (b2.back() - '0')
            n2 += i;
        b2.pop_back();
	}

	// multiple
    n_result = n1 * n2;

	// number result to binary result
    while (n_result > 0) {
        b_result = to_string(n_result % 2 ? 1 : 0) + b_result;
        n_result >>= 1;
    }

	// output
	cout << b_result;
}