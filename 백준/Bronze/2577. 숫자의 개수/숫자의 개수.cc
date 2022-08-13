#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a, b, c;
    int score[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string num;
    cin >> a >> b >> c;
    num = to_string(a*b*c);
    for (int i=0; i < int(num.size()); i++) {
        for (int j=0; j <= 9; j++) {
            if (num[i] -'0' == j) {
                score[j]++;
            }
        }
    }
    
    for (int k=0; k <= 9; k++) {
        cout << score[k] << "\n";
    }
}
