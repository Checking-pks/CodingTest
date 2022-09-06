#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

string dfs(vector<vector<bool>> field, int start) {
	vector<bool> alreadyVisit(field.size(), false);
	list<int> bucket = {start};
	string result = "";
	
	while (bucket.size()) {
		int nowSpot = bucket.back();
		bucket.pop_back();

		if (alreadyVisit[nowSpot])
			continue;
		else
			result += to_string(nowSpot) + " ";

		alreadyVisit[nowSpot] = true;

		for (int i = field[nowSpot].size() - 1; i >= 0; i--) 
			if (field[nowSpot][i])
				bucket.push_back(i);
	}
	
	return result;	
}

string bfs(vector<vector<bool>> field, int start) {
	vector<bool> alreadyVisit(field.size(), false);
	list<int> bucket = {start};
	string result = "";

	while (bucket.size()) {
		int nowSpot = bucket.front();
		bucket.pop_front();

		if (alreadyVisit[nowSpot])
			continue;
		else
			result += to_string(nowSpot) + " ";

		alreadyVisit[nowSpot] = true;

		for (int i = 0; i < field[nowSpot].size(); i++) 
			if (field[nowSpot][i])
				bucket.push_back(i);
	}

	return result;
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;
	
	vector<vector<bool>> field(n + 1, vector<bool> (n + 1, false));

	for (int i=0; i<m; i++) {
		int spotA, spotB;
		cin >> spotA >> spotB;

		field[spotA][spotB] = true;
		field[spotB][spotA] = true;
	}

	cout << dfs(field, v) << "\n" << bfs(field, v);
}