#include <iostream>
#include <vector>

using namespace std;

vector<string> numList = {
"####.##.##.####", "..#..#..#..#..#", 
"###..#####..###", "###..####..####",
"#.##.####..#..#", "####..###..####",
"####..####.####", "###..#..#..#..#",
"####.#####.####", "####.####..####"
};

int check(string s) {
	for (int i=0; i<=9; i++) {
		bool isNum = true;
		for (int j=0; isNum && j<s.length(); j++) 
			if (numList[i][j] == '.' && s[j] == '#') 
				isNum = false;

		if (isNum)
			return i;
	}
}

int main() {
	vector<string> timeList(4, "");
	for (int i=0; i<5; i++) {
		for (int j=0; j<4; j++) {
			string s;
			cin >> s;
			timeList[j] += s;
		}
	}

	cout << check(timeList[0]) << check(timeList[1])
		<< ":"
		<< check(timeList[2]) << check(timeList[3]);
}