#include <iostream>

using namespace std;

class node {
public:
	int num = 0;
	node* leftNode = NULL;
	node* rightNode = NULL;

	void output() {
		if(leftNode != NULL) leftNode->output();
		if(rightNode != NULL) rightNode->output();
		cout << num << "\n";
	}
};

int main() {
	node topNode;
	cin >> topNode.num;

	while (true) {
		node *newNode = new node, *parentNode = &topNode;
		if (!(cin >> newNode->num)) break;

		while (true) {
			if (parentNode->num > newNode->num) {
				if (parentNode->leftNode == NULL) {
					parentNode->leftNode = newNode;
					break;
				} else {
					parentNode = parentNode->leftNode;
				}
			} else {
				if (parentNode->rightNode == NULL) {
					parentNode->rightNode = newNode;
					break;
				} else {
					parentNode = parentNode->rightNode;
				}
			}
		}
	}

	topNode.output();
}