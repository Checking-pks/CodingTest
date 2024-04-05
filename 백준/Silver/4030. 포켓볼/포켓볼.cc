#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> triangleList;

void init() {
	for (int i=1, sum=0; i<=44720; i++) {
		sum += i;
		triangleList.insert(sum);
	}
}

int main() {
	init();
	
	int a, b;
	cin >> a >> b;

	for (int c=1; a | b; c++) {
		int count = 0;

		for (int i=2; i<=31622; i++) {
			int j = i*i;
			if (j <= a) continue;
			if (j >= b) break;

			count += triangleList.find(j-1) != triangleList.end();
		}

		cout << "Case " << c << ": " << count << "\n";
		
		cin >> a >> b;
	}
}