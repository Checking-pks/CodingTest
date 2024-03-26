#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
  ll H, N;
  cin >> H >> N;

  if (H > N) swap(H, N);
  if (H == N) {
    cout << 1;
    return 0;
  }

  ll size = N - H + 1;
  vector<vector<ll>> field(size, vector<ll>(size));

  for (ll i=0; i<size; i++) {
    for (ll j=i; j<size; j++) {
      if (i==0) {
        field[i][j] = 1;
        continue;
      }
      field[i][j] = field[i-1][j] + field[i][j-1];
    }
  }

  cout << field.back().back();
}