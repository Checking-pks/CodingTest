#include <iostream>
#include <vector>

using namespace std;

int distance(string m1, string m2) {
	return (m1[0] != m2[0]) + (m1[1] != m2[1]) + (m1[2] != m2[2]) + (m1[3] != m2[3]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num, min = 9;
		cin >> num;

		vector<string> mbti(num, "");

		for (int i=0; i<num; i++)
			cin >> mbti[i];

		for (int i=0; min && i<num-2; i++) {
			for (int j=i+1; min && j<num-1; j++) {
				for (int k=j+1; min && k<num; k++) {
					int nowDistance = distance(mbti[i], mbti[j]) + distance(mbti[j], mbti[k]) + distance(mbti[i], mbti[k]);
					if (min > nowDistance)
						min = nowDistance;
				}
			}
		}

		cout << min << "\n";
	}
}