#include <iostream>

using namespace std;

int main() {
	int aAttack, aHealth;
	int bAttack, bHealth;

	cin >> aAttack >> aHealth
		>> bAttack >> bHealth;

	while (aHealth > 0 && bHealth > 0) {
		aHealth -= bAttack;
		bHealth -= aAttack;
	}

	if (aHealth <= 0 && bHealth <= 0) 
		cout << "DRAW";
	else if (aHealth <= 0)
		cout << "PLAYER B";
	else
		cout << "PLAYER A";
}