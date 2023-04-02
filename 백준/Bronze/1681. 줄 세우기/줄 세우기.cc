#include <iostream>
using namespace std;

int main() {
	int n, l, r = 0;
	cin >> n >> l;

	while (n--) 
		while (++r) 
			if (to_string(r).find('0'+l) == string::npos) 
				break;

	cout << r;
}