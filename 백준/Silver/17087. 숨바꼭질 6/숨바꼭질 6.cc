#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}

int main() {
	vector<int> disList;
	int n, pos, result;
	cin >> n >> pos;

	for (int i=0, nowPos, dis; i<n; i++) {
		cin >> nowPos;
		
		dis = nowPos - pos;
		if (dis < 0) dis = -dis;
		disList.push_back(dis);
	}

	result = disList[0];

	for (int n:disList) {
		result = gcd(result, n);
	}

	cout << result;
}