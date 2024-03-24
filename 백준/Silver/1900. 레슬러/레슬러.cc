#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
  return a[1]+b[1]*a[2] > b[1]+a[1]*b[2];
}

int main() {
  int N;
  cin >> N;

  vector<vector<int>> nList(N, vector<int>(3));
  for (int i=0; i<N; i++) {
  	cin >> nList[i][1] >> nList[i][2];
    nList[i][0] = i+1;
  }

  sort(nList.begin(), nList.end(), cmp);

  for (int i=0; i<N; i++)
    cout << nList[i][0] << "\n";
}