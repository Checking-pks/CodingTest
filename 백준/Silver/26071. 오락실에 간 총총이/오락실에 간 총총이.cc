#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int minX=N, maxX=0, minY=N, maxY=0;
  
  for (int i=0; i<N; i++) {
    string s;
    cin >> s;
    for (int j=0; j<N; j++) {
      if (s[j] == '.') continue;
      minX = min(minX, j);
      maxX = max(maxX, j);
      minY = min(minY, i);
      maxY = max(maxY, i);
    }
  }

  int distX = 0, distY = 0;

  if (minX != maxX) distX = min(N-minX-1, maxX);
  if (minY != maxY) distY = min(N-minY-1, maxY);

  cout << distX + distY;
}