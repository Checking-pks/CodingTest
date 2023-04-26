#include <iostream>

using namespace std;

int main() {
	string now, start;
	cin >> now >> start;

	int nowTime, startTime;
	
	nowTime = stoi(now.substr(0, 2)) * 60 * 60
		+ stoi(now.substr(3, 2)) * 60
		+ stoi(now.substr(6));

	startTime = stoi(start.substr(0, 2)) * 60 * 60
		+ stoi(start.substr(3, 2)) * 60
		+ stoi(start.substr(6));

	int remainTime = startTime - nowTime;
	remainTime += (remainTime < 0 ? 24*60*60 : 0);
	
	string h, m, s;

	h = to_string(remainTime / 3600);
	m = to_string(remainTime % 3600 / 60);
	s = to_string(remainTime % 60);

	cout << (h.length() == 1 ? "0" : "") + h << ":" 
		<< (m.length() == 1 ? "0" : "") + m << ":" 
		<< (s.length() == 1 ? "0" : "") + s;
}