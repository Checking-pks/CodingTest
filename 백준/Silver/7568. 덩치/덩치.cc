#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
       
    int num;
    cin >> num;
    
    int people[num][2] ={0,}, ranking[num] = {0,};
    
    for (int i=0; i<num; i++) {
        cin >> people[i][0] >> people[i][1];
    }
    
    for (int i=0; i<num*num; i++) {
        if (people[i/num][0] < people[i%num][0] && people[i/num][1] < people[i%num][1]) {
            ranking[i/num]++;
        }
    }
    
    for (int i=0; i<num; i++) {
        cout << ++ranking[i] << " ";
    }
}
