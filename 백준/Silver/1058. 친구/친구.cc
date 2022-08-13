#include <iostream>
using namespace std;


int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int people, best_two_friend=0;
    cin >> people;
    
    string friends[people] = {"",};
    string real_friends[people] = {"",};
    int two_friend[people] = {0,};
    
    for (int i=0; i<people; i++) {
        cin >> friends[i];
        real_friends[i] = friends[i];
    }
    
    for (int i=0; i<people; i++) {
        for (int j=0; j<people; j++) {
            if (friends[i][j] == 'Y') {
                for (int k=0; k<people; k++) {
                    if (friends[j][k] == 'Y' && friends[i][k] == 'N' && i != k) {
                        real_friends[i][k] = 'Y';
                    }
                }
            }
        }
        
        for (int j=0; j<people; j++) {
            if (real_friends[i][j] == 'Y') {
                two_friend[i]++;
            }
        }
        
        if (best_two_friend < two_friend[i]) {
            best_two_friend = two_friend[i];
        }
        
    }
    
    cout << best_two_friend;
    
}
