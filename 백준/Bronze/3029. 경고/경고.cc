#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	int t1, t2, t;
	string h, m, s;
	cin >> s1 >> s2;

	t1 = stoi(s1.substr(0, 2)) * 3600
		+ stoi(s1.substr(3, 2)) * 60
		+ stoi(s1.substr(6));

	t2 = stoi(s2.substr(0, 2)) * 3600
		+ stoi(s2.substr(3, 2)) * 60
		+ stoi(s2.substr(6));

	if (t1 < t2) t = t2 - t1;
	else t = 24 * 60 * 60 - t1 + t2;

	h = to_string(t / 3600);
	m = to_string(t % 3600 / 60);
	s = to_string(t % 60);

	if (h.length() < 2) h = "0" + h;
	if (m.length() < 2) m = "0" + m;
	if (s.length() < 2) s = "0" + s;
	
	cout << h << ":" << m << ":" << s;
}