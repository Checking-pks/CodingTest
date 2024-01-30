#include <iostream>

using namespace std;

string formatting(string s) {
	string r = "";

	for (int i=0; i<s.length(); i++) {
		switch (s[i]) {
			case '.':
			case ':':
				if (r.back() == ' ')
					r.pop_back();
				r += s[i];
				break;
			case '(':
			case '[':
			case '{':
				if (r.back() == ' ')
					r.pop_back();
				r += '(';
				break;
			case ')':
			case ']':
			case '}':
				if (r.back() == ' ')
					r.pop_back();
				r += ')';
				break;
			case ',':
			case ';':
				if (r.back() == ' ')
					r.pop_back();
				r += ',';
				break;
			case ' ':
				if ('A' <= r.back() && r.back() <= 'Z')
					r += ' ';
				break;
			default:
				if ('a' <= s[i] && s[i] <= 'z')
					r += char(s[i] - 32);
				else
					r += s[i];
				break;
		}
	}

	while (r.back() == ' ')
		r.pop_back();
	while (r.front() == ' ')
		r = r.substr(1);

	return r;
}

int main() {
	int N;
	cin >> N;

	cin.ignore();

	for (int i=1; i<=N; i++) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);

		string r1, r2;
		r1 = formatting(s1);
		r2 = formatting(s2);

		cout << "Data Set " << i << ": ";
		cout << (r1 != r2 ? "not " : "");
		cout << "equal\n\n";
	}
}