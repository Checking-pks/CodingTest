#include <iostream>
#include <queue>
#include <set>

using namespace std;

int simulate1 (int &A, int &B, char &StartChar, int &Target) {
	queue<pair<int, int>> bucket;
	set<int> visit;

	bucket.push({(StartChar == 'A' ? A : B), 0});
	bucket.push({(StartChar == 'A' ? B : A), 1});
	visit.insert(A);
	visit.insert(B);

	while (bucket.front().second < 6) {
		int nowFrequency = bucket.front().first;
		int nowTimes = bucket.front().second;
		
		if (nowFrequency == Target) break;
		bucket.pop();

		int upBtn = nowFrequency + 20;

		if (upBtn > 146'000) 
			upBtn = 144'000;

		if (visit.find(upBtn) == visit.end()) {
			visit.insert(upBtn);
			bucket.push({upBtn, nowTimes + 1});
		}
	}

	return bucket.front().second;
}

int simulate2 (int &A, int &B, char &StartChar, int &Target) {
	queue<pair<int, int>> bucket;
	set<int> visit;

	bucket.push({(StartChar == 'A' ? A : B), 0});
	bucket.push({(StartChar == 'A' ? B : A), 1});
	visit.insert(A);
	visit.insert(B);

	while (bucket.front().second < 6) {
		int nowFrequency = bucket.front().first;
		int nowTimes = bucket.front().second;

		if (nowFrequency == Target) break;
		bucket.pop();

		int downBtn = nowFrequency - 20;

		if (downBtn < 144'000) 
			downBtn = 146'000;

		if (visit.find(downBtn) == visit.end()) {
			visit.insert(downBtn);
			bucket.push({downBtn, nowTimes + 1});
		}
	}

	return bucket.front().second;
}

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		double A, B, Target;
		char StartChar;
		cin >> A >> B >> StartChar >> Target;

		int a = A * 1000;
		int b = B * 1000;
		int t = Target * 1000;
		
		int type1 = simulate1(a, b, StartChar, t);
		int type2 = simulate2(a, b, StartChar, t);
		
		cout << min(type1, type2) << "\n";
	}
}