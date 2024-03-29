#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    long long n, m;
    cin >> n >> m;

    for (long long i=1; i<=n; i<<=1) 
      m++;

    cout << m << "\n";
  }
}