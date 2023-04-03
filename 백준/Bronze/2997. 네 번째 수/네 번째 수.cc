#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int min = 200;
    vector<int> num(4, 300);
	
	for (int i=0; i<num.size()-1; i++)
		cin >> num[i];

	sort(num.begin(), num.end());
	
	for (int i=1; i<num.size(); i++)
		if (min > num[i] - num[i-1])
			min = num[i] - num[i-1];
	
	for (int i=1; i<num.size(); i++) {
		if (num[i-1] + min != num[i]) {
			cout << num[i-1] + min;
			break;
		}
	}
}