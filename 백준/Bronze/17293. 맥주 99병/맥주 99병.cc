#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=num; i>1; i--) {
		cout << i << " bottle" << (i>1?"s":"") << " of beer on the wall, " << i << " bottle" << (i>1?"s":"") << " of beer.\n"
			<< "Take one down and pass it around, " << i-1 << " bottle" << (i>2?"s":"") << " of beer on the wall.\n\n";
	}

	cout << "1 bottle of beer on the wall, 1 bottle of beer.\n"
		<< "Take one down and pass it around, no more bottles of beer on the wall.\n\n"
		<< "No more bottles of beer on the wall, no more bottles of beer.\n"
		<< "Go to the store and buy some more, " << num << " bottle" << (num>1?"s":"") << " of beer on the wall.";
}