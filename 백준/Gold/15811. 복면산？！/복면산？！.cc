#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

typedef long long ll;

string s1, s2, sum;
map<char, int> charToIdx;
string numList = "0123456789";

void init(string s)
{
	for (char c : s)
		if (charToIdx.find(c) == charToIdx.end())
			charToIdx[c] = charToIdx.size();
}

void getNum(string s, ll &result)
{
	result = 0;

	for (char c : s)
	{
		result *= 10;
		result += numList[charToIdx[c]] - '0';
	}
}

bool simulate()
{
	ll n1, n2, s;

	do
	{
		getNum(s1, n1);
		getNum(s2, n2);
		getNum(sum, s);

		if (n1 + n2 == s) return true;
	} while (next_permutation(numList.begin(), numList.end()));

	return false;
}

int main()
{
	cin >> s1 >> s2 >> sum;

	init(s1);
	init(s2);
	init(sum);

	cout << (simulate() ? "YES" : "NO");
}