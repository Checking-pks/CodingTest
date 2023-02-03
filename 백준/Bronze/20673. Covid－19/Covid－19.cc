#include <iostream>

using namespace std;

int main() {
  int day, week;
  cin >> day >> week;

  if (day <= 50 && week <= 10)
    cout << "White";
  else if (week > 30)
    cout << "Red";
  else
    cout << "Yellow";
}