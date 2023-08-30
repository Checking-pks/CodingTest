#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin >> num;

	vector<int> Encryption(53, 0);

	for (int i=0, now; i<num; i++) {
		cin >> now;
		Encryption[now]++;
	}

	string str;
	vector<int> Decoding(53, 0);
	cin.ignore();
	getline(cin, str);

	for (int i=0; i<num; i++) {
		char now = str[i];

		if (now == ' ') Decoding[0]++;
		else if ('A' <= now && now <= 'Z') Decoding[now-'A'+1]++;
		else Decoding[now-'a'+27]++;
	}

	cout << (Encryption == Decoding ? 'y' : 'n');
}