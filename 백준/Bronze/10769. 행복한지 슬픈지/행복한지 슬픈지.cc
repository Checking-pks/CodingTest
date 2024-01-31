#include <iostream>
using namespace std;

int main(void)
{
  bool haveEmoji = false;
  int happiness=0;
  string s;
  getline(cin, s);

  for (int i=0; i<s.length()-2; i++) {
    string now = s.substr(i, 3);
    if (now == ":-)") {
      haveEmoji = true;
      happiness++;
    }
    if (now == ":-(") {
      haveEmoji = true;
      happiness--;
    }
  }

  if (!haveEmoji) cout << "none";
  else if (happiness > 0) cout << "happy";
  else if (happiness < 0) cout << "sad";
  else cout << "unsure";

  return 0;
}