#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<char> dir = {'N', 'E', 'S', 'W'};
	int result = 0;

	for (int i=0, command; i<10; i++) {
		cin >> command;

		switch(command) {
			case 1:
				result++;
				result%=4;
				break;
			case 2:
				result+=2;
				result%=4;
				break;
			case 3:
				result--;
				result+=4;
				result%=4;
				break;
		}
	}

	cout << dir[result];
}