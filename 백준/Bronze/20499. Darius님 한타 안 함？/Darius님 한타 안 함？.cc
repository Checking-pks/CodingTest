#include <iostream>
#include <string>

using namespace std;

int main() {
	int stats[] = {0, 0, 0};
	string kda;
	cin >> kda;

	kda.push_back('/');

	for (int i=0, idx = 0; i<kda.length(); i++) {
		if (kda[i] == '/') 
			idx++;
		else
			stats[idx] = stats[idx] * 10 + (kda[i] - '0');
	}

	cout << ((stats[0] + stats[2] < stats[1] || stats[1] == 0) ? "hasu" : "gosu");
}