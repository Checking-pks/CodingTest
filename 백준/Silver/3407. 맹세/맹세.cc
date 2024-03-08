#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<string> periodicTable = {"h", "he", "li", "be", "b", "c", "n", "o", "f", "ne", "na", "mg", "al", "si", "p", "s", "cl", "ar", "k", "ca", "sc", "ti", "v", "cr", "mn", "fe", "co", "ni", "cu", "zn", "ga", "ge", "as", "se", "br", "kr", "rb", "sr", "y", "zr", "nb", "mo", "tc", "ru", "rh", "pd", "ag", "cd", "in", "sn", "sb", "te", "i", "xe", "cs", "ba", "hf", "ta", "w", "re", "os", "ir", "pt", "au", "hg", "tl", "pb", "bi", "po", "at", "rn", "fr", "ra", "rf", "db", "sg", "bh", "hs", "mt", "ds", "rg", "cn", "fl", "lv", "la", "ce", "pr", "nd", "pm", "sm", "eu", "gd", "tb", "dy", "ho", "er", "tm", "yb", "lu", "ac", "th", "pa", "u", "np", "pu", "am", "cm", "bk", "cf", "es", "fm", "md", "no", "lr"};

bool isInPeriodicTable(string &s, vector<bool> &v, int pos) {
	if (s.length() <= pos) return true;
	if (v[pos]) return false;
	v[pos] = true;
	
	pair<bool, bool> result = {false, false};

	if (periodicTable.find(s.substr(pos, 1)) != 
		periodicTable.end()) {
		result.first = isInPeriodicTable(s, v, pos + 1);
	}

	if (periodicTable.find(s.substr(pos, 2)) != 
		periodicTable.end()) {
		result.second = isInPeriodicTable(s, v, pos + 2);
	}

	return result.first || result.second;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		vector<bool> visit(s.length());
		cout << (isInPeriodicTable(s, visit, 0) ? "YES" : "NO") << "\n";
	}
}