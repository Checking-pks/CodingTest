#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int c;
    cin >> c;
    
    for (int i=0; i<c; i++) {
        int student;
        double total=0, num=0;
        cin >> student;
        double score[student];
        
        for (int j=0; j<student; j++) {
            cin >> score[j];
            total += score[j];
        }
        
        for (int j=0; j<student; j++) {
            if (total/student < score[j]) {
                num++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << num/student*100 << "%\n";
    }
}