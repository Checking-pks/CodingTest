#include <iostream>

using namespace std;

int main() {
  float leftTime, rightTime;
  float m, s, g;
  float a, b;
  int l, r;

  cin >> m >> s >> g;
  cin >> a >> b;
  cin >> l >> r;

  leftTime = l / a + m / g;
  rightTime = r / b + m / s;

  cout << ((leftTime < rightTime) ? "friskus" : "latmask");
}