#include <iostream>
#include <vector>

using namespace std;

void visit(vector<int> &nList, int pos) {
  if (pos < 0 || pos >= nList.size()) return;
  if (!nList[pos]) return;
  
  int move = nList[pos];
  nList[pos] = 0;
  visit(nList, pos - move);
  visit(nList, pos + move);
}

int main() {
  int n, start, result=0;
  cin >> n;

  vector<int> nList(n);
  for (int i=0; i<n; i++)
    cin >> nList[i];
  cin >> start;

  visit(nList, start-1);

  for (int i=0; i<n; i++)
    result += !nList[i];

  cout << result;
}