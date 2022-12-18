#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string input, limit, result = "-1";
	
	cin >> input >> limit;

	sort(input.begin(), input.end());

	do {
		if (to_string(stoi(input)).length() != input.length())
			continue;
		
		if (stoi(input) > stoi(limit))
			break;

		result = input;
	} while (next_permutation(input.begin(),input.end()));

	cout << result;
}