#include <iostream>

using namespace std;

int main() {
  string n = "22233344455566677778889999";
  int tc;
  cin >> tc;

  for (int i = 0; i < tc; i++) {
    bool p = true;
    string s;
    cin >> s;

    for (int j = 0; j < s.length(); j++) {
      if (n[toupper(s[j]) - 'A'] != n[toupper(s[s.length() - 1 - j]) - 'A']) {
        p = false;
        break;
      }
    }
    cout << (p ? "YES\n" : "NO\n");
  }
}