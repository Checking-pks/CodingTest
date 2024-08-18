#include <iostream>
#include <list>

using namespace std;

int main() {
	int N;
	cin >> N;

	list<int> line;
	for (int i=1, now; i<=N; i++) {
		cin >> now;

		list<int> newLine;

		for (int j=0; j<now; j++) {
			newLine.push_front(line.back());
			line.pop_back();
		}

		newLine.push_front(i);

		while (line.size()) {
			newLine.push_front(line.back());
			line.pop_back();
		}

		line = newLine;
	}

	for (int i:line)
		cout << i << " ";
}