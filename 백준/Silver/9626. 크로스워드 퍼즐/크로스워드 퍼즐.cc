#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int M, N;
  int U, L, R, D;

  cin >> M >> N >> U >> L >> R >> D;

  vector<vector<char>> field(M+U+D, vector<char>(N+L+R, ' '));
  for (int i=0; i<M; i++) {
    string s;
    cin >> s;
    for (int j=0; j<N; j++) {
      field[i+U][j+L] = s[j];
    }
  }

  for (int i=0; i<field.size(); i++) {
    for (int j=0; j<field[i].size(); j++) {
      if (field[i][j] == ' ')
        cout << ((i&1)^(j&1) ? '.' : '#');
      else
        cout << field[i][j];
    }
    cout << "\n";
  }

  return 0;
}