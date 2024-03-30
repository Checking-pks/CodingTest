#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m, now;
  cin >> n;

  while (n) {
    int aSum = 0, bSum = 0, result=0;
    vector<pair<int, bool>> nList;
    for (int i=0; i<n; i++) {
      cin >> now;
      nList.push_back({now, true});
    }

    cin >> m;
    for (int i=0; i<m; i++) {
      cin >> now;
      nList.push_back({now, false});
    }

    sort(nList.begin(), nList.end());
    nList.push_back({0, 0});

    for (int i=0; i<nList.size()-1; i++) {
      if (nList[i].first == nList[i+1].first) {
        result += max(aSum, bSum) + nList[i].first;
        aSum = 0; bSum = 0;
        i++;
        continue;
      }

      if (nList[i].second)
        aSum += nList[i].first;
      else
        bSum += nList[i].first;
    }

    result += max(aSum, bSum);

    cout << result << "\n";
    
    cin >> n;
  }
}