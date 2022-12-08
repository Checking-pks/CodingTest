#include <iostream>
#include <vector>

using namespace std;

int main() {
    int result = 0;
    vector<int> have = {0, 0, 0}, need = {0, 0, 0};
    
    cin >> have[0] >> have[1] >> have[2];
    cin >> need[0] >> need[1] >> need[2];
    
    for (int i=0; i<3; i++) 
        if (need[i] > have[i])
            result += need[i] - have[i];
    
    cout << result;
}