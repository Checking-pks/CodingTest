#include <iostream>
#include <map>
#include <vector>

using namespace std;

int counting(string s) {
	int result = 0;
	for (int i=1; i<s.length(); i++) 
		result += (s[i] != s[i-1]);

	return result;
}

int attaching(map<string, vector<string>> &m) {
	string to00 = "", to11 = "";
	string cross01 = "", cross10 = "";
	int sizeZO = m["01"].size(), sizeOZ = m["10"].size();
	
	for (string s : m["00"]) to00 += s;
	for (string s : m["11"]) to11 += s;

	if (sizeZO) {
		m["01"][0] = to00 + m["01"][0];
		to00 = "";
		m["01"][0] += to11;
		to11 = "";
	}

	if (sizeOZ) {
		m["10"][0] += to00;
		to00 = "";
		m["10"][0] = to11 + m["10"][0];
		to11 = "";
	}

	for (int i=0; i<max(sizeZO, sizeOZ); i++) {
		if (i < sizeZO) cross01 += m["01"][i];
		if (i < sizeOZ) cross01 += m["10"][i];

		if (i < sizeOZ) cross10 += m["10"][i];
		if (i < sizeZO) cross10 += m["01"][i];
	}

	if (sizeOZ || sizeZO)
		return min(counting(cross01), counting(cross10));
	else
		return counting(to00 + to11);
}

int main() {
	int N;
	cin >> N;

	map<string, vector<string>> nList = {
		{"00", {}}, {"11", {}}, {"01", {}}, {"10", {}}
	};
	
	for (int i=0; i<N; i++) {
		string now;
		cin >> now;

		string type = "";
		type += now.front();
		type += now.back();
		
		nList[type].push_back(now);
	}

	cout << attaching(nList);
}