#include <iostream>
using namespace std;

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    string list[num];
    string result = "";
    
    for (int i=0; i<num; i++) {
        cin >> list[i];
        result = list[0];
    }
    
    for (int i=0; i<list[0].length(); i++) {
        for (int j=1; j<num; j++) {
            if (list[0][i] != list[j][i]) {
                result[i] = '?';
                break;
            }
        }
    }
    
    cout << result;
}