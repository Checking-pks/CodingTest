#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char, int> rome = {
{'I', 1}, {'V', 10}, {'X', 100}, {'L', 1000}, {'C', 10000}
};

vector<int> one = {0, 1, 2, 3, 11, 10, 11, 12, 13, 101};
vector<int> ten = {0, 100, 200, 300, 1100, 1000, 1100, 1200, 1300, 10100};

vector<string> romeOne = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
vector<string> romeTen = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

int main() {
	string B;
	cin >> B;

	int sum = 0, result;
	for (int i=0; i<B.length(); i++) 
		sum += rome[B[i]];

	for (int i=1, now; i<=100; i++) {
		now = ten[i/10] + one[i%10];

		if (sum == now) {
			result = i;
			break;
		}
	}
	
	cout << romeTen[result/10] + romeOne[result%10];
}