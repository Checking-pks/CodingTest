#include <iostream>

using namespace std;

int main() {
	string name;

	while(getline(cin, name)) {
		for (int i=0; i<name.length(); i++) {
			switch(name[i]) {
				case 'i':
				case 'I':
					name[i] -= 4;
					break;
				case 'e':
				case 'E':
					name[i] += 4;
					break;
			}
		}

		cout << name << "\n";
	}
}