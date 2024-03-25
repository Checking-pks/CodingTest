#include <iostream>
#include <vector>

using namespace std;

int solve(int n) {
  if (n == 1) return 1;
  
  int result = 0;
  bool isDiv = false;

  do {
    isDiv = false;
    for (int i=9; i>1; i--) {
      if (n%i) continue;
      
      n /= i;
      result++;
      isDiv = true;
      break;
    }
  } while (isDiv);

  return (n > 1 ? -1 : result);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    int N;
    cin >> N;
    cout << solve(N) << "\n";
  }
}