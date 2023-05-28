#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1; i<=num; i++) {
		string str;
		cin >> str;
		
		cout << "String #" << i << "\n";

		for (char c:str) 
			cout << char((c - 'A'+1)%26 +'A');

		cout << "\n\n";
	}
}