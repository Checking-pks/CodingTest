#include <iostream>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    cout << (S.find("gori") != string::npos ?
          "YES" : "NO");
}