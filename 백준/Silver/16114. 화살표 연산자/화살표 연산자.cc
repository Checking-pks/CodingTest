#include <iostream>

using namespace std;

int main() {
  int X, N;
  cin >> X >> N;

  if (N & 1 && N > 1) {
    cout << "ERROR";
    return 0;
  }

  if (N == 1) {
    X = -X;
    N = 0;
  }

  if (X < 1) {
    cout << 0;
    return 0;
  }

  if (!N) {
    cout << "INFINITE";
    return 0;
  }

  int result = 0;
  N >>= 1;

  while (0 < X - N) {
    X -= N;
    result++;
  }

  cout << result;
}