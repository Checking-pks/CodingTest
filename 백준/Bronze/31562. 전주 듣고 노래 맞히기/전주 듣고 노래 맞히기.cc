#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<pair<string, string>> songs(N, {"", "1234567"});
	for (int i=0, len; i<N; i++) {
		cin >> len >> songs[i].first;
		for (int j=0; j<7; j++) 
			cin >> songs[i].second[j];
		songs[i].second = songs[i].second.substr(0, 3);
	}

	for (int i=0; i<M; i++) {
		string now = "123", name = "";
		int count = 0;
		for (int j=0; j<3; j++)
			cin >> now[j];

		for (int j=0; j<N; j++) {
			auto song = songs[j];
			if (now == song.second) {
				name = song.first;
				count++;
			}
		}

		if (count == 0) cout << "!\n";
		else if (count > 1) cout << "?\n";
		else cout << name << "\n";
	}
}