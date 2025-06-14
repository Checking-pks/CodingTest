#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<string, string> priceList = {
	{"0111", "0121"}, {"1011", "1012"},
	{"1101", "2101"}, {"1110", "1210"}
};

int main()
{
	int N;
	cin >> N;

	int result = 3 + N - 1;
	vector<int> price(4);
	for (int i = 0; i < N - 2; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < 4; j++)
			price[j] += priceList[s][j] - '0';
	}

	cout << result + min(
		min(price[0], price[1]),
		min(price[2], price[3])
	);
}