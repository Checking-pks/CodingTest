#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int a, b;
	cin >> a >> b;

	set<int> nList;
	for (int i=0, now; i<a; i++) {
		cin >> now;
		nList.insert(now);
	}

	for (int i=0, now; i<b; i++) {
		cin >> now;

		if (nList.find(now) != nList.end())
			nList.erase(now);
		else
			nList.insert(now);
	}

	cout << nList.size();
}