#include <iostream>
#include <set>

using namespace std;

int main() {
	string str;
	cin >> str;

	if (str.length() > 156) {
		cout << "GRESKA";
		return 0;
	}

	int p=13, k=13, h=13, t=13;
	set<string> cardList;

	for (int i=0; i<str.length(); i+=3) {
		string nowCard = str.substr(i, 3);

		if (cardList.find(nowCard) == cardList.end())
			cardList.insert(nowCard);
		else {
			cout << "GRESKA";
			return 0;
		}
	}

	for (int i=0; i<str.length(); i+=3) {
		p -= (str[i] == 'P');
		k -= (str[i] == 'K');
		h -= (str[i] == 'H');
		t -= (str[i] == 'T');
	}

	cout << p << " " << k << " " << h << " " << t;
}