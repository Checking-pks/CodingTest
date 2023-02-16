#include <iostream>

using namespace std;

int main() {
    int num;
	cin >> num;

	cout << "int a;\n";
	cout << "int *ptr = &a;\n";

	for (int i=1; i<num; i++) {
		cout << "int ";
		for (int j=0; j<=i; j++) cout << "*";
		cout << "ptr" << i+1 << " = &ptr" << (i!=1 ? to_string(i) : "") << ";\n";
	}
}