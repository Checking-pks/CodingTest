#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<pair<double,double>> diamonds(N);
        for (int i = 0; i < N; i++) {
            double w, c; cin >> w >> c;
            diamonds[i] = {w, c};
        }

        vector<int> dp(N, 1);
        int ans = 1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < i; j++) {
                if (diamonds[j].first < diamonds[i].first && diamonds[j].second > diamonds[i].second) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}