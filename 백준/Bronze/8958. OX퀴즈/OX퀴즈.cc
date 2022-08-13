#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, score=0, bonus=0;
    cin >> num;
    for (int i=0; i<num; i++) {
        string list;
        cin >> list;
        list += "X";
        for (int j=0; j < int(list.length()); j++) {
            if (list[j] == 'O') {
                bonus++;
            } else if (list[j] == 'X') {
                score += (bonus*(bonus+1))/2;
                bonus = 0;
            }
        }
        cout << score << "\n";
        score = 0;
    }
}