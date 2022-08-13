#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int subject, max=-1;
    cin >> subject;
    double score[subject];
    double total=0;
    
    for (int i=0; i<subject; i++) {
        cin >> score[i];
        if (max < score[i]) {
            max = score[i];
        }
    }
    
    for (int j=0; j<subject; j++) {
        score[j]=score[j]/max*100;
        total += score[j];
    }
    
    cout << total/subject;
}
