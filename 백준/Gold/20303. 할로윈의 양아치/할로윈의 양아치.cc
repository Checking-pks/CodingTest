#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<vector<int>, int> a, pair<vector<int>, int> b) {
	if (a.first.size() != b.first.size())
		return a.first.size() < b.first.size();
	return a.second > b.second;
}

int knapsack(int capacity, vector<int>& sizes, vector<int>& values) {
    int n = sizes.size();

    // 다이나믹 프로그래밍 테이블 초기화
    vector<vector<int>> dp(n + 1, vector<int>(capacity, 0));

    // 다이나믹 프로그래밍 테이블 채우기
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < capacity; ++j) {
            if (sizes[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - sizes[i - 1]] + values[i - 1]);
            }
        }
    }

    return dp[n][capacity-1]; // 최대 가치 반환
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	// defalut
	int n, m, k;
	cin >> n >> m >> k;

	// candy count
	vector<int> candies(n+1, 0);

	for (int i=1; i<=n; i++)
		cin >> candies[i];

	// friend relationship
	vector<int> friends(n+1, 0);
	vector<pair<vector<int>, int>> groupCandy(1, {{}, 0});

	for (int i=0, kid1, kid2; i<m; i++) {
		cin >> kid1 >> kid2;

		int group1 = friends[kid1], group2 = friends[kid2];

		if (group1 == 0 && group2 == 0) {
			// 둘 다 무소속
			friends[kid1] = groupCandy.size();
			friends[kid2] = groupCandy.size();
			groupCandy.push_back({{kid1, kid2}, candies[kid1] + candies[kid2]});
		} else if (group1 == 0) {
			// kid1 무소속
			groupCandy[group2].first.push_back(kid1);
			groupCandy[group2].second += candies[kid1];
			friends[kid1] = group2;
		} else if (group2 == 0) {
			// kid2 무소속
			groupCandy[group1].first.push_back(kid2);
			groupCandy[group1].second += candies[kid2];
			friends[kid2] = group1;
		} else if (group1 == group2) {
			continue;
		} else {
			// 둘 다 소속됨
			for (int idx:groupCandy[group2].first) {
				groupCandy[group1].first.push_back(idx);
				friends[idx] = group1;
			}
			groupCandy[group1].second += groupCandy[group2].second;
			
			groupCandy[group2].first = {};
			groupCandy[group2].second = 0;
		}
	}

	for (int i=1; i<=n; i++) {
		if (friends[i] == 0) {
			groupCandy.push_back({{i}, candies[i]});
		}
	}

	vector<int> sizes, values;
    for (const auto& group : groupCandy) {
        sizes.push_back(group.first.size());
        values.push_back(group.second);
    }

    int result = knapsack(k, sizes, values);
	cout << result;
}