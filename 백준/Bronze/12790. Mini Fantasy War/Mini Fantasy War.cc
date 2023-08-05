#include <iostream>

using namespace std;

int main() {
	int character;
	cin >> character;

	while (character--) {
		int hp, mp, attack, defense;
		int equipmentHp, equipmentMp, equipmentAttack, equipmentDefense;

		cin >> hp >> mp >> attack >> defense;
		cin >> equipmentHp >> equipmentMp >> equipmentAttack >> equipmentDefense;

		hp = max(hp + equipmentHp, 1);
		mp = max(mp + equipmentMp, 1);
		attack = max(attack + equipmentAttack, 0);
		defense = defense + equipmentDefense;

		cout << 1 * hp
			+ 5 * mp
			+ 2 * attack
			+ 2 * defense
			<< "\n";
	}
}
