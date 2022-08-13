#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string, string> sites;
	int input, output;
	cin >> input >> output;

	for (int i=0; i<input; i++) {
		string site, password;
		cin >> site >> password;

		sites.insert({site, password});
	}

	for (int i=0; i<output; i++) {
		string site;
		cin >> site;

		cout << sites[site] << "\n";
	}
	
	return 0;
}