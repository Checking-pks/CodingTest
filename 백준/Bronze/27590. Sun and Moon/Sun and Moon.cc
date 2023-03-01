#include <iostream>

using namespace std;

int main() {
    int sunDay, sunCycle;
    int moonDay, moonCycle;
    
    cin >> sunDay >> sunCycle
        >> moonDay >> moonCycle;
    
    for (int i=1; true; i++) {
        if ((sunDay+i)%sunCycle == 0 && (moonDay+i)%moonCycle == 0) {
            cout << i;
            break;
        }
    }
}