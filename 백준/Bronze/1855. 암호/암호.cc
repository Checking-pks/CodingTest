#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    string str;
    cin >> num >> str;
    
    vector<vector<char>> field(str.length()/num, vector<char>(num, ' '));

	for (int i=0; i<str.length(); i++) {
		int x, y;
		x = i / num;

		if (x & 1) 
			y = num - i % num - 1;
		else
			y = i % num;

		field[x][y] = str[i];
	}

	for (int i=0; i<field[0].size(); i++) {
		for (int j=0; j<field.size(); j++) {
			if (field[j][i] == ' ') continue;
			cout << field[j][i];
		}
	}
}