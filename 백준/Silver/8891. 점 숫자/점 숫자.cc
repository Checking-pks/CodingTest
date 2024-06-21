#include <iostream>
#include <map>

using namespace std;

map<pair<int, int>, int> posToNum;
map<int, pair<int, int>> numToPos;

void init() {
	int n = 1;
	for (int i=1; true; i++) {
		int y = i;
		
		for (int x=1; true; x++, y--) {
			posToNum.insert({{y, x}, n});
			numToPos.insert({n, {y, x}});
			
			if (n++ == 40161)
				return;

			if (y == 1)
				break;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	init();

	int T;
	cin >> T;

	while (T--) {
		int a, b;
		cin >> a >> b;

		auto aPos = numToPos[a];
		auto bPos = numToPos[b];
		cout << posToNum[{
			aPos.first + bPos.first, 
			aPos.second + bPos.second
			}] << "\n";
	}
}