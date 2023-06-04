#include <iostream>
#include <algorithm>

using namespace std;

struct player {
	int score;
	int year;
	string name;
};

bool cmp1(player p1, player p2) {
	return p1.year % 100 < p2.year % 100;
}

bool cmp2(player p1, player p2) {
	return p1.score > p2.score;
}

int main() {
	player pList[3];

	for (int i=0; i<3; i++) 
		cin >> pList[i].score >> pList[i].year >> pList[i].name;

	sort(pList, pList + 3, cmp1);
	cout << pList[0].year % 100 << pList[1].year % 100 << pList[2].year % 100 << "\n";

	sort(pList, pList + 3, cmp2);
	cout << pList[0].name[0] << pList[1].name[0] << pList[2].name[0];
}