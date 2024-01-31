#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int> a, vector<int> b) {
  if (a[1] != b[1]) return a[1] > b[1];
  if (a[2] != b[2]) return a[2] < b[2];
  return a[3] < b[3];
}

int main(void)
{
  int N;
  cin >> N;

  vector<vector<int>> field(N, vector<int>(4));

  for (int i=0; i<N; i++) {
	field[i][0] = i+1;
	cin >> field[i][1] >> field[i][2] >> field[i][3];
  }

  sort(field.begin(), field.end(), cmp);
  cout << field[0][0];
}