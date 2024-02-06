#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long S, C, start=1, end=0, result=0;
	cin >> S >> C;

	vector<long long> sList(S);
	for (long long i=0; i<S; i++) {
		cin >> sList[i];
		end = max(end, sList[i]);
	}

	while (start < end) {
		long long mid = (start+end)/2, now=0;
		for (long long i=0; i<S; i++) 
			now += sList[i] / mid;

		if (now < C)
			end = mid-1;
		else
			start = mid+1;
	}

	for (long long i=0; i<S; i++) {
		result += sList[i] % end;
		C -= sList[i] / end;
	}

	if (C < 0) result += -C * end;

	cout << result;
}