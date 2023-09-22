#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, pair<char, char>> field;

void preorder(char parent) {
	if (parent == '.') return;
	cout << parent;
	preorder(field[parent].first);
	preorder(field[parent].second);
}

void inorder(char parent) {
	if (parent == '.') return;
	inorder(field[parent].first);
	cout << parent;
	inorder(field[parent].second);
}

void postorder(char parent) {
	if (parent == '.') return;
	postorder(field[parent].first);
	postorder(field[parent].second);
	cout << parent;
}

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		char parent, left, right;
		cin >> parent >> left >> right;
		field[parent] = {left, right};
	}

	preorder('A');
	cout << "\n";

	inorder('A');
	cout << "\n";

	postorder('A');
}