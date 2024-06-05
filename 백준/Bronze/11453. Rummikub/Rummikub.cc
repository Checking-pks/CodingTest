#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		bool result = false;
		int M;
		cin >> M;

		vector<vector<int>> nList(4, vector<int>(102));
		
		for (int i=0; i<M; i++) {
			string s;
			cin >> s;

			char color = s.back();
			s.pop_back();

			int num = stoi(s);
			
			if (color == 'r') nList[0][num] = true;
			if (color == 'g') nList[1][num] = true;
			if (color == 'b') nList[2][num] = true;
			if (color == 'y') nList[3][num] = true;
		}

		for (int i=1; !result && i<=100; i++) {
			if (nList[0][i] + nList[1][i] +
				nList[2][i] + nList[3][i] >= 3)
				result = true;
			
			for (int j=0; j<=3; j++) {
				if (nList[j][i-1] &
					nList[j][i] &
					nList[j][i+1]) 
					result = true;
			}
		}

		cout << (result ? "YES\n" : "NO\n");
	}
}