#include <iostream>

using namespace std;

int main() {
	int group, people, way;
	cin >> group >> people >> way;

	int w1 = group * people, w2 = group + people * way;

	if (w1 == w2) cout << 0;
	else if (w1 < w2) cout << 1;
	else cout << 2;
	
}