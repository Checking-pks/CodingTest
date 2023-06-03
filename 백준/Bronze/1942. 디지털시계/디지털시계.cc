#include <iostream>

using namespace std;

int timeToSec(string t) {
	return stoi(t.substr(0, 2)) * 60 * 60
		+ stoi(t.substr(3, 2)) * 60
		+ stoi(t.substr(6));
}

int secToTime(int t) {
	return stoi(
		to_string(t / 60 / 60) +
		to_string(t / 60 % 60) +
		to_string(t % 60)
	);
}

int main() {
	for (int i=0; i<3; i++) {
		int count = 0;
		string t1, t2;
		cin >> t1 >> t2;
		
		int sec1 = timeToSec(t1), sec2 = timeToSec(t2);

		if (sec2 - sec1 > 0)
			for (int j=sec1; j<=sec2; j++) 
				count += (secToTime(j) % 3 == 0);
		else
			for (int j=sec1; j<=sec2+24*60*60; j++)
				count += (secToTime(j%(24*60*60)) % 3 == 0);

		cout << count << "\n";
	}
}