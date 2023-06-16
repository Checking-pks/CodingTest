#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> binaryToOctal = {{"000", 0}, {"001", 1}, {"010", 2}, {"011", 3}, {"100", 4}, {"101", 5}, {"110", 6}, {"111", 7}};

	string binary;
	cin >> binary;

	while (binary.length() % 3)
		binary = "0" + binary;

	for (int i=0; i<binary.length(); i+=3) {
		cout << binaryToOctal[binary.substr(i, 3)];
	}
}