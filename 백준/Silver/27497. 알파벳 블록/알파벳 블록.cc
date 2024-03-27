#include <iostream>
#include <list>

using namespace std;

int main() {
  list<char> strList;
  list<bool> record;
  int N, command;
  cin >> N;

  char nowChar;
  while (N--) {
    cin >> command;

    switch(command) {
      case 1:
        cin >> nowChar;
        strList.push_back(nowChar);
        record.push_back(true);
        break;
      case 2:
        cin >> nowChar;
        strList.push_front(nowChar);
        record.push_back(false);
        break;
      case 3:
        if (strList.empty()) break;
        if (record.back())
          strList.pop_back();
        else
          strList.pop_front();
        record.pop_back();
        break;
    }
  }

  if (strList.empty()) {
    cout << 0;
    return 0;
  }

  for (char c:strList)
    cout << c;
}