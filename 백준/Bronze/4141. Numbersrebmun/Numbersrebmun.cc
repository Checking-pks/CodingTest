#include <iostream>

using namespace std;

int main() {
  string n = "22233344455566677778889999";
  int tc;
  cin >> tc;

  for (int i = 0; i < tc; i++) {
    bool p = true;
    string str;
    cin >> str;

    for (int j = 0; j < str.length(); j++) {
      if (n[toupper(str[j]) - 'A'] !=
          n[toupper(str[str.length() - 1 - j]) - 'A']) {
        p = false;
        break;
      }
    }

    cout << (p ? "YES\n" : "NO\n");
  }
}