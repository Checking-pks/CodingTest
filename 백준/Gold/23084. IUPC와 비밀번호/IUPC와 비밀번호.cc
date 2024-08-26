#include <iostream>
#include <vector>

using namespace std;

int len;
vector<int> alphabet(26);

bool isSame(vector<int> &arr, bool needChange) {
	int count = 0;

	for (int i = 0; i < 26; i++)
		count += abs(alphabet[i] - arr[i]);

	if (count == 2)
		return true;

	if (!count && !needChange)
		return true;

	return false;
}

bool check(string &after) {
	if (len > after.length())
		return false;

	bool needChange = (len == after.length());

	vector<int> nowAlphabet(26);
	for (int i = 0; i < len; i++)
		nowAlphabet[after[i] - 'a']++;

	if (isSame(nowAlphabet, needChange))
		return true;

	for (int i = len; i < after.length(); i++) {
		nowAlphabet[after[i] - 'a']++;
		nowAlphabet[after[i - len] - 'a']--;

		if (isSame(nowAlphabet, needChange))
			return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string S;
	int N;

	cin >> S >> N;

	len = S.length();
	for (char c : S)
		alphabet[c - 'a']++;

	for (int i = 0; i < N; i++) {
		string now;
		cin >> now;

		cout << (check(now) ? "YES\n" : "NO\n");
	}
}