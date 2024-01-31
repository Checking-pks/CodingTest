#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int R, C, A, B;
  cin >> R >> C >> A >> B;

  vector<vector<bool>> field(R * A, vector<bool>(C * B));
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      for (int k = 0; k < A; k++) {
        for (int l = 0; l < B; l++) {
          field[i * A + k][j * B + l] = !((i & 1) ^ (j & 1));
        }
      }
    }
  }

  for (int i = 0; i < field.size(); i++) {
    for (int j = 0; j < field[i].size(); j++) {
      cout << (field[i][j] ? 'X' : '.');
    }
    cout << "\n";
  }

  return 0;
}