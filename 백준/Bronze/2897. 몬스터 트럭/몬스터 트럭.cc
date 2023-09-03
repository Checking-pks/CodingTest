#include <iostream>
#include <vector>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;

	vector<string> field(r);
	vector<int> result(5, 0);
	
	for (int i=0; i<r; i++)
		cin >> field[i];

	for (int i=0; i<r-1; i++) {
		for (int j=0; j<c-1; j++) {
			string now = field[i].substr(j, 2) + field[i+1].substr(j, 2);
			
			int xNum = 0;
			
			for (int k=0; k<now.length(); k++) {
				if (now[k] == '#') {
					xNum = -1;
					break;
				}
					
				xNum += (now[k] == 'X');
			}

			if (xNum == -1) continue;
			result[xNum]++;
		}
	}

	for (int i:result)
		cout << i << "\n";
}