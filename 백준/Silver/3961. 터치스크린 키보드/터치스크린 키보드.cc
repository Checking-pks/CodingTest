#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> keyboardPos = {
{1, 0}, {2, 4}, {2, 2}, {1, 2}, {0, 2}, //abcde
{1, 3}, {1, 4}, {1, 5}, {0, 7}, {1, 6}, //fghij
{1, 7}, {1, 8}, {2, 6}, {2, 5}, {0, 8}, //klmno
{0, 9}, {0, 0}, {0, 3}, {1, 1}, {0, 4}, //pqrst
{0, 6}, {2, 3}, {0, 1}, {2, 1}, {0, 5}, {2, 0} //uvwxyz
};

int getDistance(string &w1, string &w2) {
  int result = 0;

  for (int i=0; i<w1.length(); i++) {
    result += 
      abs(keyboardPos[w1[i] - 'a'][0] - keyboardPos[w2[i] - 'a'][0]) +
      abs(keyboardPos[w1[i] - 'a'][1] - keyboardPos[w2[i] - 'a'][1]);
  }

  return result;
}

int main() {
  ios::sync_with_stdio(0);
  cout.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    string target;
    int num;
    cin >> target >> num;

    vector<pair<int, string>> wordList(num);
    
    for (int i=0; i<num; i++) {
      cin >> wordList[i].second;
      wordList[i].first = getDistance(
        target, 
        wordList[i].second);
    }

    sort(wordList.begin(), wordList.end());

    for (int i=0; i<num; i++)
      cout << wordList[i].second << " " 
        << wordList[i].first << "\n";
  }
}