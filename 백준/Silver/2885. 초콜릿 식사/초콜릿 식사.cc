#include <iostream>

using namespace std;

string numToBinaryStr(int n) {
  string result = "";
  for (int i = 1; i <= n; i <<= 1)
    result = (n&i ? '1' : '0') + result;

  return result;
}

int main() {
  int K;
  cin >> K;

  string binary = numToBinaryStr(K);
  int splitTime;

  for (int i=binary.length()-1; i>=0; i--) {
    if (binary[i] == '1') {
      splitTime = i;
      break;
    }
  }

  int maxSize = 1 << (binary.length()-1);
  if (splitTime) {
    maxSize <<= 1;
    splitTime++;
  }
  
  cout << maxSize << " " << splitTime;
}