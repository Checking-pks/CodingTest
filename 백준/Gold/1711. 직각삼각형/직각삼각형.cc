#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

long long gcd(vector<long long> num) {
	if (num[1] == 0) return num[0];
	return gcd({num[1], num[0] % num[1]});
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, result=0;
	cin >> num;

	vector<vector<long long>> spots(num, vector<long long>(2, 0));

	for (int i=0; i<num; i++)
		cin >> spots[i][0] >> spots[i][1];

	sort(spots.begin(), spots.end());

	for (int i=0; i<num; i++) {
		map<vector<long long>, int> normalizationSpot;
		for (int j=0; j<num; j++) {
			if (i==j) continue;

			vector<long long> nowNormalization = {
				spots[i][0] - spots[j][0], spots[i][1] - spots[j][1]
			};

			long long nowGcd = gcd(nowNormalization);

			if (nowGcd < 0)
				nowGcd = -nowGcd;
			nowNormalization[0] /= nowGcd;
			nowNormalization[1] /= nowGcd;

			normalizationSpot[nowNormalization]++;
		}

		for (auto &now : normalizationSpot) {
			int nowX = now.first[0];
			int nowY = now.first[1];
			if (normalizationSpot.count({-nowY, nowX})) {
				result += now.second * normalizationSpot[{-nowY, nowX}];
			}
		}
	}
	
	cout << result;
}