#include <iostream>

using namespace std;

int main() {
  string num;
  cin >> num;

  while (num != "0") {
    int result = 1;
    for (char c : num) {
      if (c == '0')
        result += 5;
      else if (c == '1')
        result += 3;
      else
        result += 4;
    }

    cout << result << "\n";
    cin >> num;
  }
}