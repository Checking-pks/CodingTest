#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	long long a, b, first=0, second=0;
	cin >> a >> b;

	vector<long long> numList(55, 1);
	numList[0] = 0;

	for (int i=2; i<54; i++) {
		numList[i] = numList[i-1] * 2 + (1ll << (i-1));
	}

	a--;
	for (long long i=0, last=0; 1ll<<i <= a; i++) {
		if (!(a&(1ll<<i))) continue;

		first += numList[i] + last + 1;
		last += 1ll<<i;
	}

	for (long long i=0, last=0; 1ll<<i <= b; i++) {
		if (!(b&(1ll<<i))) continue;

		second += numList[i] + last + 1;
		last += 1ll<<i;
	}

	cout << second - first;
}