#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int result[11] = {0,};

  for (int i=0; i<2047; i++) {
    for (int j=0, now; j<11; j++) {
      cin >> now;
      result[j] ^= now;
    }
  }

  for (int i=0; i<11; i++)
    cout << result[i] << " ";
}